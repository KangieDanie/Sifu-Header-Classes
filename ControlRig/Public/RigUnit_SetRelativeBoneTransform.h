#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigUnit_SetRelativeBoneTransform.generated.h"

USTRUCT()
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    FName Space;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedBone;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedSpaceIndex;
    
    CONTROLRIG_API FRigUnit_SetRelativeBoneTransform();
};

