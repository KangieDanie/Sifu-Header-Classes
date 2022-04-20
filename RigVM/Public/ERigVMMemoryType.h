#pragma once
#include "CoreMinimal.h"
#include "ERigVMMemoryType.generated.h"

UENUM()
enum class ERigVMMemoryType : uint8 {
    Work,
    Literal,
    External,
    Invalid,
};

