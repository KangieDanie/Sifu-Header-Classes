#pragma once
#include "CoreMinimal.h"
#include "ESVONPathfindingRequestResult.generated.h"

UENUM()
namespace ESVONPathfindingRequestResult {
    enum Type {
        Failed,
        ReadyToPath,
        AlreadyAtGoal,
        Deferred,
        Success,
    };
}

