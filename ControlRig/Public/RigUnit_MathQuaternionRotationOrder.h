#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "EControlRigRotationOrder.h"
#include "RigUnit_MathQuaternionRotationOrder.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    EControlRigRotationOrder RotationOrder;
    
    CONTROLRIG_API FRigUnit_MathQuaternionRotationOrder();
};

