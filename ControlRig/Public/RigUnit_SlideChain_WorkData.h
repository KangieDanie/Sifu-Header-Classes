#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_SlideChain_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SlideChain_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ChainLength;
    
    UPROPERTY()
    TArray<float> ItemSegments;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TArray<FTransform> BlendedTransforms;
    
    CONTROLRIG_API FRigUnit_SlideChain_WorkData();
};

