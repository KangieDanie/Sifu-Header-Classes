#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBinaryOp.h"
#include "RigUnit_MathBoolOr.generated.h"

USTRUCT()
struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathBoolOr();
};

