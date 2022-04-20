#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlInteger.generated.h"

USTRUCT()
struct FRigUnit_SetControlInteger : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    int32 Weight;
    
    UPROPERTY()
    int32 IntegerValue;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_SetControlInteger();
};

