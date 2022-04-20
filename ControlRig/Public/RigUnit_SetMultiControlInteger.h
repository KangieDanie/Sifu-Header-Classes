#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlInteger_Entry.h"
#include "RigUnit_SetMultiControlInteger.generated.h"

USTRUCT()
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigUnit_SetMultiControlInteger_Entry> Entries;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedControlIndices;
    
    CONTROLRIG_API FRigUnit_SetMultiControlInteger();
};

