#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_PropagateTransform.generated.h"

USTRUCT()
struct FRigUnit_PropagateTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    bool bRecomputeGlobal;
    
    UPROPERTY()
    bool bApplyToChildren;
    
    UPROPERTY()
    bool bRecursive;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedIndex;
    
    CONTROLRIG_API FRigUnit_PropagateTransform();
};

