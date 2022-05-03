#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "EBoneGetterSetterMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_GetInitialBoneTransform.generated.h"

USTRUCT()
struct FRigUnit_GetInitialBoneTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedBone;
    
    CONTROLRIG_API FRigUnit_GetInitialBoneTransform();
};

