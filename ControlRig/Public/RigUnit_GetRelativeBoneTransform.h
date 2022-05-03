#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_GetRelativeBoneTransform.generated.h"

USTRUCT()
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    FName Space;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedBone;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedSpace;
    
    CONTROLRIG_API FRigUnit_GetRelativeBoneTransform();
};

