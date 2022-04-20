#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryOp.h"
#include "RigUnit_MathIntMin.generated.h"

USTRUCT()
struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathIntMin();
};

