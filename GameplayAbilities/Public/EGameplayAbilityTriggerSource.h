#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityTriggerSource.generated.h"

UENUM()
namespace EGameplayAbilityTriggerSource {
    enum Type {
        GameplayEvent,
        OwnedTagAdded,
        OwnedTagPresent,
    };
}

