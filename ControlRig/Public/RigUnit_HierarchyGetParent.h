#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyBase.h"
#include "RigElementKey.h"
#include "CachedRigElement.h"
#include "RigUnit_HierarchyGetParent.generated.h"

USTRUCT()
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Child;
    
    UPROPERTY()
    FRigElementKey Parent;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    CONTROLRIG_API FRigUnit_HierarchyGetParent();
};

