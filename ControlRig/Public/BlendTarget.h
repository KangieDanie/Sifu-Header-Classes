#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BlendTarget.generated.h"

USTRUCT(BlueprintType)
struct FBlendTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    CONTROLRIG_API FBlendTarget();
};

