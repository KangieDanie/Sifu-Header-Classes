#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "BaseActorTargetCondition.h"
#include "SelfCondition.generated.h"

UCLASS()
class SIFU_API USelfCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_condition;
    
    USelfCondition();
};

