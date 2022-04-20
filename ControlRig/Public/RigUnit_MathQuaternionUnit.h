#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionUnaryOp.h"
#include "RigUnit_MathQuaternionUnit.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathQuaternionUnit();
};

