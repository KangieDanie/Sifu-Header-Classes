#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyBase.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_HierarchyGetChildren.generated.h"

USTRUCT()
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Parent;
    
    UPROPERTY()
    bool bIncludeParent;
    
    UPROPERTY()
    bool bRecursive;
    
    UPROPERTY()
    FRigElementKeyCollection Children;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    UPROPERTY()
    FRigElementKeyCollection CachedChildren;
    
    CONTROLRIG_API FRigUnit_HierarchyGetChildren();
};

