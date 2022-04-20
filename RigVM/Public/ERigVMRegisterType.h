#pragma once
#include "CoreMinimal.h"
#include "ERigVMRegisterType.generated.h"

UENUM()
enum class ERigVMRegisterType : uint8 {
    Plain,
    String,
    Name,
    Struct,
    Invalid,
};

