#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AimTarget.generated.h"

USTRUCT(BlueprintType)
struct FAimTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    FVector AlignVector;
    
    CONTROLRIG_API FAimTarget();
};

