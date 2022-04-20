#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectPeriodInhibitionRemovedPolicy.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8 {
    NeverReset,
    ResetPeriod,
    ExecuteAndResetPeriod,
};

