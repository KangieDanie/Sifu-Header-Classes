#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit_InverseExecution.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_InverseExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext ExecuteContext;
    
    FRigUnit_InverseExecution();
};

