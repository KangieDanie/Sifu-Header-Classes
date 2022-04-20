#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "ControlRigExecuteContext.h"
#include "RigUnitMutable.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnitMutable : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FControlRigExecuteContext ExecuteContext;
    
    FRigUnitMutable();
};

