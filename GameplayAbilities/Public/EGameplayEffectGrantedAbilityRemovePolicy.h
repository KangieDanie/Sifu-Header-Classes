#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectGrantedAbilityRemovePolicy.generated.h"

UENUM()
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8 {
    CancelAbilityImmediately,
    RemoveAbilityOnEnd,
    DoNothing,
};

