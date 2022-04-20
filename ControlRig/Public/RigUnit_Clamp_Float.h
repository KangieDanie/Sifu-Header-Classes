#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_Clamp_Float.generated.h"

USTRUCT()
struct FRigUnit_Clamp_Float : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Min;
    
    UPROPERTY()
    float Max;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_Clamp_Float();
};

