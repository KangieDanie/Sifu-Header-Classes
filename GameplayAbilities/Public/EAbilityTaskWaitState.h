#pragma once
#include "CoreMinimal.h"
#include "EAbilityTaskWaitState.generated.h"

UENUM()
enum class EAbilityTaskWaitState {
    WaitingOnGame = 0x1,
    WaitingOnUser,
    WaitingOnAvatar = 0x4,
};

