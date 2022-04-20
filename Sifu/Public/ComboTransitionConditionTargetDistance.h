#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionFloat -FallbackName=SCMathExpressionFloat
#include "ComboTransitionConditionTargetDistance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionTargetDistance : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_condition;
    
    UComboTransitionConditionTargetDistance();
};

