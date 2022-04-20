#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_NoiseFloat.generated.h"

USTRUCT()
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Speed;
    
    UPROPERTY()
    float Frequency;
    
    UPROPERTY()
    float Minimum;
    
    UPROPERTY()
    float Maximum;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    float Time;
    
    CONTROLRIG_API FRigUnit_NoiseFloat();
};

