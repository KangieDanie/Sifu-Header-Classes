#pragma once
#include "CoreMinimal.h"
#include "EControlRigFKRigExecuteMode.generated.h"

UENUM()
enum class EControlRigFKRigExecuteMode : uint8 {
    Replace,
    Additive,
    Max,
};

