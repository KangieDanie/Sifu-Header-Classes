#pragma once
#include "CoreMinimal.h"
#include "EImpactDamageOverride.generated.h"

UENUM()
enum EImpactDamageOverride {
    IDO_None,
    IDO_On,
    IDO_Off,
    IDO_MAX UMETA(Hidden),
};

