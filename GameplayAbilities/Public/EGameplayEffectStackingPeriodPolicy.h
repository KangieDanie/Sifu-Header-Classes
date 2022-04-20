#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectStackingPeriodPolicy.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectStackingPeriodPolicy : uint8 {
    ResetOnSuccessfulApplication,
    NeverReset,
};

