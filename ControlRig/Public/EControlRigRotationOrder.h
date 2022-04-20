#pragma once
#include "CoreMinimal.h"
#include "EControlRigRotationOrder.generated.h"

UENUM()
enum class EControlRigRotationOrder : uint8 {
    XYZ,
    XZY,
    YXZ,
    YZX,
    ZXY,
    ZYX,
};

