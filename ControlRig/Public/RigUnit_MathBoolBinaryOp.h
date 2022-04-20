#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolBinaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool A;
    
    UPROPERTY()
    bool B;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathBoolBinaryOp();
};

