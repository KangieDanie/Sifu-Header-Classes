#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBinaryOp.h"
#include "RigUnit_MathColorAdd.generated.h"

USTRUCT()
struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathColorAdd();
};

