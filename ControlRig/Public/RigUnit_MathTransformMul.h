#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBinaryOp.h"
#include "RigUnit_MathTransformMul.generated.h"

USTRUCT()
struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathTransformMul();
};

