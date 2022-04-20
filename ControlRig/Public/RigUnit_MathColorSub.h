#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBinaryOp.h"
#include "RigUnit_MathColorSub.generated.h"

USTRUCT()
struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathColorSub();
};

