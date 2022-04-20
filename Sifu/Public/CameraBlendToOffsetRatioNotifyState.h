#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "CameraBlendToOffsetRatioNotifyState.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UCameraBlendToOffsetRatioNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fTargetRatio;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_BlendCurve;
    
public:
    UCameraBlendToOffsetRatioNotifyState();
};

