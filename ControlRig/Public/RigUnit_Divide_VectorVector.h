#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryVectorOp.h"
#include "RigUnit_Divide_VectorVector.generated.h"

USTRUCT()
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_Divide_VectorVector();
};

