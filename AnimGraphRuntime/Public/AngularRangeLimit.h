#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AngularRangeLimit.generated.h"

USTRUCT(BlueprintType)
struct FAngularRangeLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector LimitMin;
    
    UPROPERTY(EditAnywhere)
    FVector LimitMax;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    ANIMGRAPHRUNTIME_API FAngularRangeLimit();
};

