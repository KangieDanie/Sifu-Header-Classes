#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_TwistBones_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_TwistBones_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    TArray<float> ItemRatios;
    
    UPROPERTY()
    TArray<FTransform> ItemTransforms;
    
    CONTROLRIG_API FRigUnit_TwistBones_WorkData();
};

