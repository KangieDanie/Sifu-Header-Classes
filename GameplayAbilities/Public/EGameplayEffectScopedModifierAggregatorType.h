#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectScopedModifierAggregatorType.generated.h"

UENUM()
enum class EGameplayEffectScopedModifierAggregatorType : uint8 {
    CapturedAttributeBacked,
    Transient,
};

