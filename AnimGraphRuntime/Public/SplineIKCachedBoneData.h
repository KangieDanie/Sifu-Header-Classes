#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "SplineIKCachedBoneData.generated.h"

USTRUCT()
struct FSplineIKCachedBoneData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoneReference Bone;
    
    UPROPERTY()
    int32 RefSkeletonIndex;
    
    ANIMGRAPHRUNTIME_API FSplineIKCachedBoneData();
};

