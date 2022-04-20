#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntBinaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 A;
    
    UPROPERTY()
    int32 B;
    
    UPROPERTY()
    int32 Result;
    
    CONTROLRIG_API FRigUnit_MathIntBinaryOp();
};

