#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryFloatOp.h"
#include "RigUnit_Multiply_FloatFloat.generated.h"

USTRUCT()
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_Multiply_FloatFloat();
};

