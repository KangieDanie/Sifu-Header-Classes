#pragma once
#include "CoreMinimal.h"
#include "EControlRigModifyBoneMode.generated.h"

UENUM()
enum class EControlRigModifyBoneMode : uint8 {
    OverrideLocal,
    OverrideGlobal,
    AdditiveLocal,
    AdditiveGlobal,
    Max,
};

