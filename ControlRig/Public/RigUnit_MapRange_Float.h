#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_MapRange_Float.generated.h"

USTRUCT()
struct FRigUnit_MapRange_Float : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float MinIn;
    
    UPROPERTY()
    float MaxIn;
    
    UPROPERTY()
    float MinOut;
    
    UPROPERTY()
    float MaxOut;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_MapRange_Float();
};

