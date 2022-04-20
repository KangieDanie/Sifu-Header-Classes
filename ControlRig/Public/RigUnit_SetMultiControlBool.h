#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlBool_Entry.h"
#include "RigUnit_SetMultiControlBool.generated.h"

USTRUCT()
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigUnit_SetMultiControlBool_Entry> Entries;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedControlIndices;
    
    CONTROLRIG_API FRigUnit_SetMultiControlBool();
};

