#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformFilter -FallbackName=TransformFilter
#include "RigUnit_Control.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Control : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FEulerTransform Transform;
    
    UPROPERTY()
    FTransform Base;
    
    UPROPERTY()
    FTransform InitTransform;
    
    UPROPERTY()
    FTransform Result;
    
    UPROPERTY()
    FTransformFilter Filter;
    
    FRigUnit_Control();
};

