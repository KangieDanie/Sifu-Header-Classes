#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetMultiControlBool_Entry.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetMultiControlBool_Entry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    bool BoolValue;
    
    CONTROLRIG_API FRigUnit_SetMultiControlBool_Entry();
};

