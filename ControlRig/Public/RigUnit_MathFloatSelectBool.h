#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatSelectBool.generated.h"

USTRUCT()
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Condition;
    
    UPROPERTY()
    float IfTrue;
    
    UPROPERTY()
    float IfFalse;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_MathFloatSelectBool();
};

