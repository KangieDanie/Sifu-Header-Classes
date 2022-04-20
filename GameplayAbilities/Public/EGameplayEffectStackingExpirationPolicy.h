#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectStackingExpirationPolicy.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectStackingExpirationPolicy : uint8 {
    ClearEntireStack,
    RemoveSingleStackAndRefreshDuration,
    RefreshDuration,
};

