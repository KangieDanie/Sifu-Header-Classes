#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetMultiControlInteger_Entry.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetMultiControlInteger_Entry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    int32 IntegerValue;
    
    CONTROLRIG_API FRigUnit_SetMultiControlInteger_Entry();
};

