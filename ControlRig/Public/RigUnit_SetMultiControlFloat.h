#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlFloat_Entry.h"
#include "RigUnit_SetMultiControlFloat.generated.h"

USTRUCT()
struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigUnit_SetMultiControlFloat_Entry> Entries;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedControlIndices;
    
    CONTROLRIG_API FRigUnit_SetMultiControlFloat();
};

