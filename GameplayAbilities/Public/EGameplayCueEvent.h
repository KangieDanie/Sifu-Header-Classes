#pragma once
#include "CoreMinimal.h"
#include "EGameplayCueEvent.generated.h"

UENUM()
namespace EGameplayCueEvent {
    enum Type {
        OnActive,
        WhileActive,
        Executed,
        Removed,
    };
}

