#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "RigUnit_GetCurveValue.generated.h"

USTRUCT()
struct FRigUnit_GetCurveValue : public FRigUnit {
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
    CONTROLRIG_API FRigUnit_GetCurveValue();
};

