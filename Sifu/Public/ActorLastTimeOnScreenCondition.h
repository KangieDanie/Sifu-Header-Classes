#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "ActorLastTimeOnScreenCondition.generated.h"

UCLASS()
class SIFU_API UActorLastTimeOnScreenCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_ValidTimeRangeCondition;
    
    UActorLastTimeOnScreenCondition();
};

