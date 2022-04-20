#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_DeltaFromPreviousFloat.generated.h"

USTRUCT()
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Delta;
    
    UPROPERTY()
    float PreviousValue;
    
    UPROPERTY()
    float Cache;
    
    CONTROLRIG_API FRigUnit_DeltaFromPreviousFloat();
};

