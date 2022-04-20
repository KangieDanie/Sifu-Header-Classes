#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyBase.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_HierarchyGetSiblings.generated.h"

USTRUCT()
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    bool bIncludeItem;
    
    UPROPERTY()
    FRigElementKeyCollection Siblings;
    
    UPROPERTY()
    FCachedRigElement CachedItem;
    
    UPROPERTY()
    FRigElementKeyCollection CachedSiblings;
    
    CONTROLRIG_API FRigUnit_HierarchyGetSiblings();
};

