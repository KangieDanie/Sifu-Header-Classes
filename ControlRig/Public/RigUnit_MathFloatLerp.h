#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatLerp.generated.h"

USTRUCT()
struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float A;
    
    UPROPERTY()
    float B;
    
    UPROPERTY()
    float T;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_MathFloatLerp();
};

