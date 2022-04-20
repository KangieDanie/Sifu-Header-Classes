#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityReplicationPolicy.generated.h"

UENUM()
namespace EGameplayAbilityReplicationPolicy {
    enum Type {
        ReplicateNo,
        ReplicateYes,
    };
}

