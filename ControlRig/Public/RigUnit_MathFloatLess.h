#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatLess.generated.h"

USTRUCT()
struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float A;
    
    UPROPERTY()
    float B;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathFloatLess();
};

