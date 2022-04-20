#pragma once
#include "CoreMinimal.h"
#include "ETargetDataFilterSelf.generated.h"

UENUM(BlueprintType)
namespace ETargetDataFilterSelf {
    enum Type {
        TDFS_Any,
        TDFS_NoSelf,
        TDFS_NoOthers,
        TDFS_MAX UMETA(Hidden),
    };
}

