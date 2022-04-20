#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetMultiControlFloat_Entry.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetMultiControlFloat_Entry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    float FloatValue;
    
    CONTROLRIG_API FRigUnit_SetMultiControlFloat_Entry();
};

