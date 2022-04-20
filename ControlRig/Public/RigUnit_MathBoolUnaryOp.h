#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolUnaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Value;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathBoolUnaryOp();
};

