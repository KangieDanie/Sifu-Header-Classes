#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolConstant.h"
#include "RigUnit_MathBoolConstFalse.generated.h"

USTRUCT()
struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathBoolConstFalse();
};

