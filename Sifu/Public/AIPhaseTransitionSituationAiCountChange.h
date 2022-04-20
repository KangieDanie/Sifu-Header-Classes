#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionInteger -FallbackName=SCMathExpressionInteger
#include "AIPhaseTransitionSituationAiCountChange.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionSituationAiCountChange : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionInteger m_Expression;
    
public:
    UAIPhaseTransitionSituationAiCountChange();
};

