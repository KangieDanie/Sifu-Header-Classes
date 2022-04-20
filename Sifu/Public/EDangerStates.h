#pragma once
#include "CoreMinimal.h"
#include "EDangerStates.generated.h"

UENUM()
enum class EDangerStates : uint8 {
    Safe,
    Warning,
    Danger,
    Count,
    None,
};

