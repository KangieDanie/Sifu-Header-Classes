#pragma once
#include "CoreMinimal.h"
#include "RigUnit_UnaryQuaternionOp.h"
#include "RigUnit_InverseQuaterion.generated.h"

USTRUCT()
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_InverseQuaterion();
};

