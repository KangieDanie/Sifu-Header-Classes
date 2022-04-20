#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateFloatLerp.generated.h"

USTRUCT()
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TargetValue;
    
    UPROPERTY()
    float InitialValue;
    
    UPROPERTY()
    float Blend;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    float AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateFloatLerp();
};

