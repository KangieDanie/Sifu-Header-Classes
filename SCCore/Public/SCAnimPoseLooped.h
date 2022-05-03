#pragma once
#include "CoreMinimal.h"
#include "SCPoseAssetSelection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SCAnimPoseLooped.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSCAnimPoseLooped {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCPoseAssetSelection m_Pose;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_WeightCurve;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_RandomDelay;
    
    SCCORE_API FSCAnimPoseLooped();
};

