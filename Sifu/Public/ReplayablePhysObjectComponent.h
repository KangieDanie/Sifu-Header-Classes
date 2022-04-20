#pragma once
#include "CoreMinimal.h"
#include "ReplayableStaticObjectComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ReplayablePhysObjectComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayablePhysObjectComponent : public UReplayableStaticObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_IsSimulatingPhysics)
    bool m_bIsReplaySimulatingPhysics;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bDebugDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceNetUpdateOnBodyAwake;
    
public:
    UReplayablePhysObjectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_IsSimulatingPhysics();
    
public:
    UFUNCTION()
    void OnComponentWake(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION()
    void OnComponentSleep(UPrimitiveComponent* _wakingComponent, FName _boneName);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDetach(bool _bReplaySimulatePhysics);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAttachTo(AActor* _skActor, FName _socketName, FVector _position, FRotator _rotation);
    
};

