#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolConstant.h"
#include "RigUnit_MathBoolConstTrue.generated.h"

USTRUCT()
struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathBoolConstTrue();
};

