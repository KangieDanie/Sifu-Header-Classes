#pragma once
#include "CoreMinimal.h"
#include "ControlRig.h"
#include "EControlRigFKRigExecuteMode.h"
#include "FKControlRig.generated.h"

UCLASS(EditInlineNew)
class CONTROLRIG_API UFKControlRig : public UControlRig {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<bool> IsControlActive;
    
    UPROPERTY()
    EControlRigFKRigExecuteMode ApplyMode;
    
public:
    UFKControlRig();
};

