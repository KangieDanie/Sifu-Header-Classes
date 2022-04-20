#pragma once
#include "CoreMinimal.h"
#include "AIPhaseTransition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionFloat -FallbackName=SCMathExpressionFloat
#include "AIPhaseTransitionDifficultyLevelChanged.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionDifficultyLevelChanged : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSCMathExpressionFloat m_Expression;
    
public:
    UAIPhaseTransitionDifficultyLevelChanged();
};

