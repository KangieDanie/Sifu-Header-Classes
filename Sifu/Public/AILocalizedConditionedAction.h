#pragma once
#include "CoreMinimal.h"
#include "AIConditionedAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionFloat -FallbackName=SCMathExpressionFloat
#include "AILocalizedConditionedAction.generated.h"

USTRUCT()
struct FAILocalizedConditionedAction : public FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_DistanceTestExpression;
    
    SIFU_API FAILocalizedConditionedAction();
};

