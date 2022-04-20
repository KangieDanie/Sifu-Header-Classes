#pragma once
#include "CoreMinimal.h"
#include "EGameplayModOp.generated.h"

UENUM()
namespace EGameplayModOp {
    enum Type {
        Additive,
        Multiplicitive,
        Division,
        Override,
        Max,
    };
}

