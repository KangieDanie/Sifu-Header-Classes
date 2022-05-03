#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionFloat -FallbackName=SCMathExpressionFloat
#include "AIComboCondition.h"
#include "ComboAIConditionEnemyDistance.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionEnemyDistance : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_condition;
    
    UComboAIConditionEnemyDistance();
};

