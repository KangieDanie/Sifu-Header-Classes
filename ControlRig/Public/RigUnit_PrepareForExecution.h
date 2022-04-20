#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit_PrepareForExecution.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_PrepareForExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext ExecuteContext;
    
    FRigUnit_PrepareForExecution();
};

