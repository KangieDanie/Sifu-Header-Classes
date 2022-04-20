#pragma once
#include "CoreMinimal.h"
#include "ReplayCameraTransform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ReplayFightingCharacterComponent.generated.h"

class AReplayingCamera;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayFightingCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_CameraTransform)
    FReplayCameraTransform m_CameraTransform;
    
    UPROPERTY(Transient)
    AReplayingCamera* m_CameraDummy;
    
public:
    UReplayFightingCharacterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_CameraTransform();
    
};

