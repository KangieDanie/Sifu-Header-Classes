#pragma once
#include "CoreMinimal.h"
#include "EGameplayCuePayloadType.generated.h"

UENUM()
enum class EGameplayCuePayloadType : uint8 {
    CueParameters,
    FromSpec,
};

