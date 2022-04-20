#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatUnaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_MathFloatUnaryOp();
};

