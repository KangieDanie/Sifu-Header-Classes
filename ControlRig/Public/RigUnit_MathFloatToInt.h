#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatToInt.generated.h"

USTRUCT()
struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    int32 Result;
    
    CONTROLRIG_API FRigUnit_MathFloatToInt();
};

