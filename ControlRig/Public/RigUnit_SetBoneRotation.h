#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "EBoneGetterSetterMode.h"
#include "RigUnit_SetBoneRotation.generated.h"

USTRUCT()
struct FRigUnit_SetBoneRotation : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedBone;
    
    CONTROLRIG_API FRigUnit_SetBoneRotation();
};

