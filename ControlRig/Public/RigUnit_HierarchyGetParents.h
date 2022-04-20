#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyBase.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_HierarchyGetParents.generated.h"

USTRUCT()
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Child;
    
    UPROPERTY()
    bool bIncludeChild;
    
    UPROPERTY()
    bool bReverse;
    
    UPROPERTY()
    FRigElementKeyCollection Parents;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FRigElementKeyCollection CachedParents;
    
    CONTROLRIG_API FRigUnit_HierarchyGetParents();
};

