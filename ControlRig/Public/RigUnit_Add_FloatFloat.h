#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryFloatOp.h"
#include "RigUnit_Add_FloatFloat.generated.h"

USTRUCT()
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_Add_FloatFloat();
};

