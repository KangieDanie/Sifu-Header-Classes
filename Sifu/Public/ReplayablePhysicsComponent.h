#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
#include "ReplayablePhysicsComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayablePhysicsComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_LastPoseSnapshot)
    FPoseSnapshot m_LastPoseSnapshot;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_SkeletalMeshComp;
    
    UPROPERTY(ReplicatedUsing=OnRep_Active)
    bool m_bActive;
    
public:
    UReplayablePhysicsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
private:
    UFUNCTION()
    void OnRep_LastPoseSnapshot();
    
    UFUNCTION()
    void OnRep_Active();
    
    
    // Fix for true pure virtual functions not being implemented
};

