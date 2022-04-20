#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityNetExecutionPolicy.generated.h"

UENUM()
namespace EGameplayAbilityNetExecutionPolicy {
    enum Type {
        LocalPredicted,
        LocalOnly,
        ServerInitiated,
        ServerOnly,
    };
}

