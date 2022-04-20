#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_SetRelativeTransformForItem.generated.h"

USTRUCT()
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Child;
    
    UPROPERTY()
    FRigElementKey Parent;
    
    UPROPERTY()
    bool bParentInitial;
    
    UPROPERTY()
    FTransform RelativeTransform;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    CONTROLRIG_API FRigUnit_SetRelativeTransformForItem();
};

