#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryQuaternionOp.h"
#include "RigUnit_MultiplyQuaternion.generated.h"

USTRUCT()
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MultiplyQuaternion();
};

