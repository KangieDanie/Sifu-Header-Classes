#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectStackingType.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectStackingType : uint8 {
    None,
    AggregateBySource,
    AggregateByTarget,
};

