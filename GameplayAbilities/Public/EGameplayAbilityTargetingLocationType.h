#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityTargetingLocationType.generated.h"

UENUM(BlueprintType)
namespace EGameplayAbilityTargetingLocationType {
    enum Type {
        LiteralTransform,
        ActorTransform,
        SocketTransform,
    };
}

