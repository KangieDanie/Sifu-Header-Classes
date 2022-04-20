#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatConstant.h"
#include "RigUnit_MathFloatConstPi.generated.h"

USTRUCT()
struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatConstPi();
};

