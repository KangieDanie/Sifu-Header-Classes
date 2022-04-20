#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetCurveValue.generated.h"

USTRUCT()
struct FRigUnit_SetCurveValue : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Curve;
    
    UPROPERTY()
    float Value;
    
private:
    UPROPERTY()
    FCachedRigElement CachedCurveIndex;
    
public:
    CONTROLRIG_API FRigUnit_SetCurveValue();
};

