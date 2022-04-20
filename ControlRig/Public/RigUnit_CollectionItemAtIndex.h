#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "RigElementKeyCollection.h"
#include "RigElementKey.h"
#include "RigUnit_CollectionItemAtIndex.generated.h"

USTRUCT()
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    FRigElementKey Item;
    
    CONTROLRIG_API FRigUnit_CollectionItemAtIndex();
};

