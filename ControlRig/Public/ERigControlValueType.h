#pragma once
#include "CoreMinimal.h"
#include "ERigControlValueType.generated.h"

UENUM()
enum class ERigControlValueType {
    Initial,
    Current,
    Minimum,
    Maximum,
};

