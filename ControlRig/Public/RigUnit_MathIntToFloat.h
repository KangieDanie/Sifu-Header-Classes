#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntToFloat.generated.h"

USTRUCT()
struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Value;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_MathIntToFloat();
};

