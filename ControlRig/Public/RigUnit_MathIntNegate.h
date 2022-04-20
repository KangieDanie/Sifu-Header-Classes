#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntUnaryOp.h"
#include "RigUnit_MathIntNegate.generated.h"

USTRUCT()
struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathIntNegate();
};

