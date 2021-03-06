#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetConditionInstance.h"
#include "HitBoxCondition.h"
#include "HitBoxGenericCondition.generated.h"

UCLASS()
class SIFU_API UHitBoxGenericCondition : public UHitBoxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_condition;
    
    UHitBoxGenericCondition();
};

