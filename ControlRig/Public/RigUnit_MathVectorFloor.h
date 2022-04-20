#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorUnaryOp.h"
#include "RigUnit_MathVectorFloor.generated.h"

USTRUCT()
struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathVectorFloor();
};

