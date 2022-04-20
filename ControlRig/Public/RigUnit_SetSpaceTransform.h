#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBoneGetterSetterMode.h"
#include "RigUnit_SetSpaceTransform.generated.h"

USTRUCT()
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Space;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    EBoneGetterSetterMode SpaceType;
    
    UPROPERTY()
    FCachedRigElement CachedSpaceIndex;
    
    CONTROLRIG_API FRigUnit_SetSpaceTransform();
};

