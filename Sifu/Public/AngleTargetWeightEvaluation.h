#pragma once
#include "CoreMinimal.h"
#include "BaseDirectionalTargetWeightEvaluation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "AngleTargetWeightEvaluation.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAngleTargetWeightEvaluation : public UBaseDirectionalTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_AngleCurve;
    
public:
    UAngleTargetWeightEvaluation();
};

