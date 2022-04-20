#pragma once
#include "CoreMinimal.h"
#include "EWaitAttributeChangeComparison.generated.h"

UENUM()
namespace EWaitAttributeChangeComparison {
    enum Type {
        None,
        GreaterThan,
        LessThan,
        GreaterThanOrEqualTo,
        LessThanOrEqualTo,
        NotEqualTo,
        ExactlyEqualTo,
        MAX,
    };
}

