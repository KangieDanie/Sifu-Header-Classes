#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatFloor.generated.h"

USTRUCT()
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    int32 Int;
    
    CONTROLRIG_API FRigUnit_MathFloatFloor();
};

