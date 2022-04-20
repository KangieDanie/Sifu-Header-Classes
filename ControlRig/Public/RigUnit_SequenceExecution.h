#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit_SequenceExecution.generated.h"

USTRUCT()
struct FRigUnit_SequenceExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext ExecuteContext;
    
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext A;
    
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext B;
    
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext C;
    
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext D;
    
    CONTROLRIG_API FRigUnit_SequenceExecution();
};

