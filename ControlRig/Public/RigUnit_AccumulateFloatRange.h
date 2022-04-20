#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateFloatRange.generated.h"

USTRUCT()
struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Minimum;
    
    UPROPERTY()
    float Maximum;
    
    UPROPERTY()
    float AccumulatedMinimum;
    
    UPROPERTY()
    float AccumulatedMaximum;
    
    CONTROLRIG_API FRigUnit_AccumulateFloatRange();
};

