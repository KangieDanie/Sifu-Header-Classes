#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatClamp.generated.h"

USTRUCT()
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Minimum;
    
    UPROPERTY()
    float Maximum;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_MathFloatClamp();
};

