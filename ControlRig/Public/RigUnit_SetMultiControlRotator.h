#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlRotator_Entry.h"
#include "RigUnit_SetMultiControlRotator.generated.h"

USTRUCT()
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigUnit_SetMultiControlRotator_Entry> Entries;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedControlIndices;
    
    CONTROLRIG_API FRigUnit_SetMultiControlRotator();
};

