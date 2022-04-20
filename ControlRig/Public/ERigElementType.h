#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.generated.h"

UENUM(BlueprintType)
enum class ERigElementType : uint8 {
    None,
    Bone,
    Space,
    Control = 0x4,
    Curve = 0x8,
    All = 0xF,
};

