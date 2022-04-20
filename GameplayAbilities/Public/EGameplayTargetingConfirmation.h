#pragma once
#include "CoreMinimal.h"
#include "EGameplayTargetingConfirmation.generated.h"

UENUM()
namespace EGameplayTargetingConfirmation {
    enum Type {
        Instant,
        UserConfirmed,
        Custom,
        CustomMulti,
    };
}

