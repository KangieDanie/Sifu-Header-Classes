#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "CachedRigElement.h"
#include "RigUnit_GetControlBool.generated.h"

USTRUCT()
struct FRigUnit_GetControlBool : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    bool BoolValue;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_GetControlBool();
};

