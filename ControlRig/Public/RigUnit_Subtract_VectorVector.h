#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryVectorOp.h"
#include "RigUnit_Subtract_VectorVector.generated.h"

USTRUCT()
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_Subtract_VectorVector();
};

