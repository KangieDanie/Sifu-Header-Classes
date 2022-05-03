#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "EBoneGetterSetterMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_GetSpaceTransform.generated.h"

USTRUCT()
struct FRigUnit_GetSpaceTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Space;
    
    UPROPERTY()
    EBoneGetterSetterMode SpaceType;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FCachedRigElement CachedSpaceIndex;
    
    CONTROLRIG_API FRigUnit_GetSpaceTransform();
};

