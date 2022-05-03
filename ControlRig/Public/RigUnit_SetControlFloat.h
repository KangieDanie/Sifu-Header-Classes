#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "CachedRigElement.h"
#include "RigUnit_SetControlFloat.generated.h"

USTRUCT()
struct FRigUnit_SetControlFloat : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_SetControlFloat();
};

