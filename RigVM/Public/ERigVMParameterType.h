#pragma once
#include "CoreMinimal.h"
#include "ERigVMParameterType.generated.h"

UENUM()
enum class ERigVMParameterType : uint8 {
    Input,
    Output,
    Invalid,
};

