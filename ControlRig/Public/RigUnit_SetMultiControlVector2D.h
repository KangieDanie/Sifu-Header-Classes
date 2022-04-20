#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit_SetMultiControlVector2D_Entry.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMultiControlVector2D.generated.h"

USTRUCT()
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigUnit_SetMultiControlVector2D_Entry> Entries;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedControlIndices;
    
    CONTROLRIG_API FRigUnit_SetMultiControlVector2D();
};

