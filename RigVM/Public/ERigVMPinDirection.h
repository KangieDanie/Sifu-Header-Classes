#pragma once
#include "CoreMinimal.h"
#include "ERigVMPinDirection.generated.h"

UENUM()
enum class ERigVMPinDirection {
    Input,
    Output,
    IO,
    Visible,
    Hidden,
    Invalid,
};

