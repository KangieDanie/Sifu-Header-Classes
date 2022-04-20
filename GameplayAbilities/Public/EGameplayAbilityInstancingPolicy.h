#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityInstancingPolicy.generated.h"

UENUM()
namespace EGameplayAbilityInstancingPolicy {
    enum Type {
        NonInstanced,
        InstancedPerActor,
        InstancedPerExecution,
    };
}

