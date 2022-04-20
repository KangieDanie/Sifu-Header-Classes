#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "CachedRigElement.h"
#include "RigUnit_GetControlInteger.generated.h"

USTRUCT()
struct FRigUnit_GetControlInteger : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    int32 IntegerValue;
    
    UPROPERTY()
    int32 Minimum;
    
    UPROPERTY()
    int32 Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_GetControlInteger();
};

