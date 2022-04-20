#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionChain.generated.h"

USTRUCT()
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey FirstItem;
    
    UPROPERTY()
    FRigElementKey LastItem;
    
    UPROPERTY()
    bool Reverse;
    
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    UPROPERTY()
    FRigElementKeyCollection CachedCollection;
    
    UPROPERTY()
    int32 CachedHierarchyHash;
    
    CONTROLRIG_API FRigUnit_CollectionChain();
};

