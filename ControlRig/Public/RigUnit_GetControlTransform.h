#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "EBoneGetterSetterMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigUnit_GetControlTransform.generated.h"

USTRUCT()
struct FRigUnit_GetControlTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FTransform Minimum;
    
    UPROPERTY()
    FTransform Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_GetControlTransform();
};

