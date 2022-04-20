#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ECharacterStat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionInteger -FallbackName=SCMathExpressionInteger
#include "StatsCondition.generated.h"

UCLASS()
class SIFU_API UStatsCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECharacterStat m_eStat;
    
    UPROPERTY(EditAnywhere)
    FSCMathExpressionInteger m_MathExpression;
    
    UStatsCondition();
};

