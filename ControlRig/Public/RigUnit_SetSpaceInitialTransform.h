#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBoneGetterSetterMode.h"
#include "RigUnit_SetSpaceInitialTransform.generated.h"

USTRUCT()
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SpaceName;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FTransform Result;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FCachedRigElement CachedSpaceIndex;
    
    CONTROLRIG_API FRigUnit_SetSpaceInitialTransform();
};

