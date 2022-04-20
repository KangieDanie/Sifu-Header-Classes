#pragma once
#include "CoreMinimal.h"
#include "EChaosClothTetherMode.generated.h"

UENUM()
enum class EChaosClothTetherMode : uint8 {
    FastTetherFastLength,
    AccurateTetherFastLength,
    AccurateTetherAccurateLength,
    MaxChaosClothTetherMode,
};

