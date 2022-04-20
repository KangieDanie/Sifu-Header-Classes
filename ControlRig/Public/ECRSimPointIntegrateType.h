#pragma once
#include "CoreMinimal.h"
#include "ECRSimPointIntegrateType.generated.h"

UENUM()
enum class ECRSimPointIntegrateType : uint8 {
    Verlet,
    SemiExplicitEuler,
};

