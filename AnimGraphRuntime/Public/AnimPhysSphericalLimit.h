#pragma once
#include "CoreMinimal.h"
#include "ESphericalLimitType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimPhysSphericalLimit.generated.h"

USTRUCT(BlueprintType)
struct FAnimPhysSphericalLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference DrivingBone;
    
    UPROPERTY(EditAnywhere)
    FVector SphereLocalOffset;
    
    UPROPERTY(EditAnywhere)
    float LimitRadius;
    
    UPROPERTY(EditAnywhere)
    ESphericalLimitType LimitType;
    
    ANIMGRAPHRUNTIME_API FAnimPhysSphericalLimit();
};

