#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_MathTransformBase.generated.h"

USTRUCT()
struct FRigUnit_MathTransformBase : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathTransformBase();
};

