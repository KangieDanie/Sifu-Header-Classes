#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CollectionBase.h"
#include "ERigElementType.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionNameSearch.generated.h"

USTRUCT()
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PartialName;
    
    UPROPERTY()
    ERigElementType TypeToSearch;
    
    UPROPERTY()
    FRigElementKeyCollection Collection;
    
    UPROPERTY()
    FRigElementKeyCollection CachedCollection;
    
    UPROPERTY()
    int32 CachedHierarchyHash;
    
    CONTROLRIG_API FRigUnit_CollectionNameSearch();
};

