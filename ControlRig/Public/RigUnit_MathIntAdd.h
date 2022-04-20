#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryOp.h"
#include "RigUnit_MathIntAdd.generated.h"

USTRUCT()
struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathIntAdd();
};

