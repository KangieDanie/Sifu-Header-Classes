#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntUnaryOp.h"
#include "RigUnit_MathIntAbs.generated.h"

USTRUCT()
struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathIntAbs();
};

