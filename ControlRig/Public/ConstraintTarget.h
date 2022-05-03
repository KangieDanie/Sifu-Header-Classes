#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformFilter -FallbackName=TransformFilter
#include "ConstraintTarget.generated.h"

USTRUCT(BlueprintType)
struct FConstraintTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainOffset;
    
    UPROPERTY(EditAnywhere)
    FTransformFilter Filter;
    
    CONTROLRIG_API FConstraintTarget();
};

