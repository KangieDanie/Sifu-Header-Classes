#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryVectorOp.h"
#include "RigUnit_Add_VectorVector.generated.h"

USTRUCT()
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_Add_VectorVector();
};

