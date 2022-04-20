#pragma once
#include "CoreMinimal.h"
#include "EAimMode.generated.h"

UENUM()
enum class EAimMode : uint8 {
    AimAtTarget,
    OrientToTarget,
    MAX,
};

