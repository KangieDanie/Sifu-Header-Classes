#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
#include "BaseActorTargetCondition.h"
#include "TargetCondition.generated.h"

UCLASS()
class SIFU_API UTargetCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_condition;
    
    UTargetCondition();
};

