#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "MathRBFInterpolateVectorXform_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateVectorXform_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Target;
    
    UPROPERTY()
    FTransform Value;
    
    CONTROLRIG_API FMathRBFInterpolateVectorXform_Target();
};

