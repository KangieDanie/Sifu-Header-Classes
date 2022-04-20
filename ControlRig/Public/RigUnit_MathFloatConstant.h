#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatConstant.generated.h"

USTRUCT()
struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    CONTROLRIG_API FRigUnit_MathFloatConstant();
};

