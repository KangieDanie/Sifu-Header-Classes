#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "RigElementKey.h"
#include "ERigElementType.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionChildren.generated.h"

USTRUCT()
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Parent;
    
    UPROPERTY()
    bool bIncludeParent;
    
    UPROPERTY()
    bool bRecursive;
    
    UPROPERTY()
    ERigElementType TypeToSearch;
    
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    UPROPERTY()
    FRigElementKeyCollection CachedCollection;
    
    UPROPERTY()
    int32 CachedHierarchyHash;
    
    CONTROLRIG_API FRigUnit_CollectionChildren();
};

