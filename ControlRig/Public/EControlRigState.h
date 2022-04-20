#pragma once
#include "CoreMinimal.h"
#include "EControlRigState.generated.h"

UENUM()
enum class EControlRigState {
    Init,
    Update,
    Invalid,
};

