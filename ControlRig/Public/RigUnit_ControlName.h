#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_ControlName.generated.h"

USTRUCT()
struct FRigUnit_ControlName : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    CONTROLRIG_API FRigUnit_ControlName();
};

