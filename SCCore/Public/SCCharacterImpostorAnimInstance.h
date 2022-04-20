#pragma once
#include "CoreMinimal.h"
#include "SCAnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
#include "SCCharacterImpostorAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class SCCORE_API USCCharacterImpostorAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    FPoseSnapshot m_PoseSnapshotToMimic;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_bHasAnimation;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    UAnimSequence* m_animation;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_bMirrorAnimation;
    
    USCCharacterImpostorAnimInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

