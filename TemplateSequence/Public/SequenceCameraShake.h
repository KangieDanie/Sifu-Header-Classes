#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
#include "SequenceCameraShake.generated.h"

class UCameraAnimationSequence;
class USequenceCameraShakeSequencePlayer;
class USequenceCameraShakeCameraStandIn;

UCLASS(EditInlineNew)
class TEMPLATESEQUENCE_API USequenceCameraShake : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCameraAnimationSequence* Sequence;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float RandomSegmentDuration;
    
    UPROPERTY(EditAnywhere)
    bool bRandomSegment;
    
private:
    UPROPERTY(Transient)
    USequenceCameraShakeSequencePlayer* Player;
    
    UPROPERTY(Transient)
    USequenceCameraShakeCameraStandIn* CameraStandIn;
    
public:
    USequenceCameraShake();
};

