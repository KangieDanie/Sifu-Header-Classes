#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EBTNodeResult -FallbackName=EBTNodeResult
#include "BTTaskNodeRelevancyCondition.generated.h"

USTRUCT(BlueprintType)
struct FBTTaskNodeRelevancyCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_RelevancyCondition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTNodeResult::Type> m_eResultWhenIrrelevant;
    
    SIFU_API FBTTaskNodeRelevancyCondition();
};

