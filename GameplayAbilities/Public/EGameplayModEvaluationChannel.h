#pragma once
#include "CoreMinimal.h"
#include "EGameplayModEvaluationChannel.generated.h"

UENUM()
enum class EGameplayModEvaluationChannel : uint8 {
    Channel0,
    Channel1,
    Channel2,
    Channel3,
    Channel4,
    Channel5,
    Channel6,
    Channel7,
    Channel8,
    Channel9,
    Channel_MAX UMETA(Hidden),
};

