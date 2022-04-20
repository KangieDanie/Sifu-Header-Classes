#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateFloatMul.generated.h"

USTRUCT()
struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Multiplier;
    
    UPROPERTY()
    float InitialValue;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    float AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateFloatMul();
};

