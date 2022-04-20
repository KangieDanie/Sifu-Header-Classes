#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntClamp.generated.h"

USTRUCT()
struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Value;
    
    UPROPERTY()
    int32 Minimum;
    
    UPROPERTY()
    int32 Maximum;
    
    UPROPERTY()
    int32 Result;
    
    CONTROLRIG_API FRigUnit_MathIntClamp();
};

