#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBinaryOp.h"
#include "RigUnit_MathQuaternionMul.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathQuaternionMul();
};

