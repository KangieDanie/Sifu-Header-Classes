#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ARSkeletonDefinition.h"
#include "EARJointTransformSpace.h"
#include "ARPose3D.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARPose3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSkeletonDefinition SkeletonDefinition;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTransform> JointTransforms;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<bool> IsJointTracked;
    
    UPROPERTY(BlueprintReadOnly)
    EARJointTransformSpace JointTransformSpace;
    
    FARPose3D();
};

