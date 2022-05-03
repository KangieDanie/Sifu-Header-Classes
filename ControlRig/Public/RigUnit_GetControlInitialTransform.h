#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "EBoneGetterSetterMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_GetControlInitialTransform.generated.h"

USTRUCT()
struct FRigUnit_GetControlInitialTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_GetControlInitialTransform();
};

