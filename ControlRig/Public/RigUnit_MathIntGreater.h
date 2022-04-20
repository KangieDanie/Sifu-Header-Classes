#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntGreater.generated.h"

USTRUCT()
struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 A;
    
    UPROPERTY()
    int32 B;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathIntGreater();
};

