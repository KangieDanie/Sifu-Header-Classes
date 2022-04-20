#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit_ForLoopCount.generated.h"

USTRUCT()
struct FRigUnit_ForLoopCount : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Count;
    
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    float Ratio;
    
    UPROPERTY()
    bool Continue;
    
    UPROPERTY(EditAnywhere, Transient)
    FControlRigExecuteContext Completed;
    
    CONTROLRIG_API FRigUnit_ForLoopCount();
};

