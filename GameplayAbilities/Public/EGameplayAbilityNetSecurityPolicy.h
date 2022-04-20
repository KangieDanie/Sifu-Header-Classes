#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityNetSecurityPolicy.generated.h"

UENUM()
namespace EGameplayAbilityNetSecurityPolicy {
    enum Type {
        ClientOrServer,
        ServerOnlyExecution,
        ServerOnlyTermination,
        ServerOnly,
    };
}

