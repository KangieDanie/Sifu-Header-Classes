#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagEventType.generated.h"

UENUM()
namespace EGameplayTagEventType {
    enum Type {
        NewOrRemoved,
        AnyCountChange,
    };
}

