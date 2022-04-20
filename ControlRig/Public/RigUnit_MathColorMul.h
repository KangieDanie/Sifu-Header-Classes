#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBinaryOp.h"
#include "RigUnit_MathColorMul.generated.h"

USTRUCT()
struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathColorMul();
};

