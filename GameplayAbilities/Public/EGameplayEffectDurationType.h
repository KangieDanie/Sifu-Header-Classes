#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectDurationType.generated.h"

UENUM()
enum class EGameplayEffectDurationType : uint8 {
    Instant,
    Infinite,
    HasDuration,
};

