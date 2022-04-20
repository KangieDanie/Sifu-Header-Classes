#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateFloatAdd.generated.h"

USTRUCT()
struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Increment;
    
    UPROPERTY()
    float InitialValue;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    float AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateFloatAdd();
};

