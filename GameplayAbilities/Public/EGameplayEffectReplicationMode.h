#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectReplicationMode.generated.h"

UENUM()
enum class EGameplayEffectReplicationMode {
    Minimal,
    Mixed,
    Full,
};

