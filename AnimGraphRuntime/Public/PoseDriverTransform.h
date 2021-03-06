#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "PoseDriverTransform.generated.h"

USTRUCT(BlueprintType)
struct FPoseDriverTransform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector TargetTranslation;
    
    UPROPERTY(EditAnywhere)
    FRotator TargetRotation;
    
    ANIMGRAPHRUNTIME_API FPoseDriverTransform();
};

