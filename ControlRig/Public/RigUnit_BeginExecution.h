#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit_BeginExecution.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_BeginExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext ExecuteContext;
    
    FRigUnit_BeginExecution();
};

