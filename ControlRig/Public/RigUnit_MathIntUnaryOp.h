#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntUnaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Value;
    
    UPROPERTY()
    int32 Result;
    
    CONTROLRIG_API FRigUnit_MathIntUnaryOp();
};

