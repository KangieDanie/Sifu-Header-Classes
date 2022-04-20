#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "ETransformGetterType.h"
#include "ETransformSpaceMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_GetJointTransform.generated.h"

USTRUCT()
struct FRigUnit_GetJointTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Joint;
    
    UPROPERTY()
    ETransformGetterType Type;
    
    UPROPERTY()
    ETransformSpaceMode TransformSpace;
    
    UPROPERTY()
    FTransform BaseTransform;
    
    UPROPERTY()
    FName BaseJoint;
    
    UPROPERTY()
    FTransform Output;
    
    CONTROLRIG_API FRigUnit_GetJointTransform();
};

