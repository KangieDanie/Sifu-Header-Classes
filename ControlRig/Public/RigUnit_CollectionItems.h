#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionItems.generated.h"

USTRUCT()
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FRigElementKey> Items;
    
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    CONTROLRIG_API FRigUnit_CollectionItems();
};

