#pragma once
#include "CoreMinimal.h"
#include "EAbilityTaskNetSyncType.generated.h"

UENUM()
enum class EAbilityTaskNetSyncType : uint8 {
    BothWait,
    OnlyServerWait,
    OnlyClientWait,
};

