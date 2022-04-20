#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_BinaryFloatOp.generated.h"

USTRUCT()
struct FRigUnit_BinaryFloatOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Argument0;
    
    UPROPERTY()
    float Argument1;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_BinaryFloatOp();
};

