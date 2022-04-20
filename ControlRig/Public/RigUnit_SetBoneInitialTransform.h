#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBoneGetterSetterMode.h"
#include "RigUnit_SetBoneInitialTransform.generated.h"

USTRUCT()
struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FTransform Result;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedBone;
    
    CONTROLRIG_API FRigUnit_SetBoneInitialTransform();
};

