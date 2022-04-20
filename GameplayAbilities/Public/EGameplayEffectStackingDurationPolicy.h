#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectStackingDurationPolicy.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectStackingDurationPolicy : uint8 {
    RefreshOnSuccessfulApplication,
    NeverRefresh,
};

