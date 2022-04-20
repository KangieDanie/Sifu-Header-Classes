#pragma once
#include "CoreMinimal.h"
#include "ERigEvent.generated.h"

UENUM()
enum class ERigEvent : uint8 {
    None,
    RequestAutoKey,
    Max,
};

