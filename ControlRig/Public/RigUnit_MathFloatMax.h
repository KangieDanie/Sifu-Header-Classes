#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryOp.h"
#include "RigUnit_MathFloatMax.generated.h"

USTRUCT()
struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatMax();
};

