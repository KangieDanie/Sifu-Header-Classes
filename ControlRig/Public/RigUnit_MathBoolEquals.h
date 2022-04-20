#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolEquals.generated.h"

USTRUCT()
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool A;
    
    UPROPERTY()
    bool B;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathBoolEquals();
};

