#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBinaryOp.h"
#include "RigUnit_MathBoolAnd.generated.h"

USTRUCT()
struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathBoolAnd();
};

