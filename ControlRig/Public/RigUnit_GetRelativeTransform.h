#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryTransformOp.h"
#include "RigUnit_GetRelativeTransform.generated.h"

USTRUCT()
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_GetRelativeTransform();
};

