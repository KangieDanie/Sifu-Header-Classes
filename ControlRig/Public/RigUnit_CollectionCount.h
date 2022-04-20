#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionCount.generated.h"

USTRUCT()
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    UPROPERTY()
    int32 Count;
    
    CONTROLRIG_API FRigUnit_CollectionCount();
};

