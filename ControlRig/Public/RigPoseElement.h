#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigPoseElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigPoseElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCachedRigElement Index;
    
    UPROPERTY()
    FTransform GlobalTransform;
    
    UPROPERTY()
    FTransform LocalTransform;
    
    UPROPERTY()
    float CurveValue;
    
    FRigPoseElement();
};

