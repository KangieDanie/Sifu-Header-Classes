#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolConstant.generated.h"

USTRUCT()
struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Value;
    
    CONTROLRIG_API FRigUnit_MathBoolConstant();
};

