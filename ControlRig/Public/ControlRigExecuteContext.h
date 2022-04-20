#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMExecuteContext -FallbackName=RigVMExecuteContext
#include "ControlRigExecuteContext.generated.h"

USTRUCT()
struct FControlRigExecuteContext : public FRigVMExecuteContext {
    GENERATED_BODY()
public:
    CONTROLRIG_API FControlRigExecuteContext();
};

