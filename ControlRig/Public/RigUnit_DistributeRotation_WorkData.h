#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DistributeRotation_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DistributeRotation_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    TArray<int32> ItemRotationA;
    
    UPROPERTY()
    TArray<int32> ItemRotationB;
    
    UPROPERTY()
    TArray<float> ItemRotationT;
    
    UPROPERTY()
    TArray<FTransform> ItemLocalTransforms;
    
    CONTROLRIG_API FRigUnit_DistributeRotation_WorkData();
};

