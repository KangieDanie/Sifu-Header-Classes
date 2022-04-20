#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_RandomFloat.generated.h"

USTRUCT()
struct FRigUnit_RandomFloat : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Seed;
    
    UPROPERTY()
    float Minimum;
    
    UPROPERTY()
    float Maximum;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    float LastResult;
    
    UPROPERTY()
    int32 LastSeed;
    
    UPROPERTY()
    float TimeLeft;
    
    CONTROLRIG_API FRigUnit_RandomFloat();
};

