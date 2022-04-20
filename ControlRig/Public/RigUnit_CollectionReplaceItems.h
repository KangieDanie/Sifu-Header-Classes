#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionReplaceItems.generated.h"

USTRUCT()
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Items;
    
    UPROPERTY()
    FName Old;
    
    UPROPERTY()
    FName New;
    
    UPROPERTY()
    bool RemoveInvalidItems;
    
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    UPROPERTY()
    FRigElementKeyCollection CachedCollection;
    
    UPROPERTY()
    int32 CachedHierarchyHash;
    
    CONTROLRIG_API FRigUnit_CollectionReplaceItems();
};

