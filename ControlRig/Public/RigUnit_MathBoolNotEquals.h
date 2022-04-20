#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolNotEquals.generated.h"

USTRUCT()
struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool A;
    
    UPROPERTY()
    bool B;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathBoolNotEquals();
};

