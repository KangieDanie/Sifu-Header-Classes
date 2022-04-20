#pragma once
#include "CoreMinimal.h"
#include "ERigExecutionType.generated.h"

UENUM()
enum class ERigExecutionType : uint8 {
    Runtime,
    Editing,
    Max,
};

