#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityActivationMode.generated.h"

UENUM(BlueprintType)
namespace EGameplayAbilityActivationMode {
    enum Type {
        Authority,
        NonAuthority,
        Predicting,
        Confirmed,
        Rejected,
    };
}

