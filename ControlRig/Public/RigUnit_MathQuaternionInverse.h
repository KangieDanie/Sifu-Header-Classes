#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionUnaryOp.h"
#include "RigUnit_MathQuaternionInverse.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathQuaternionInverse();
};

