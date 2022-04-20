#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MathRBFInterpolateVectorFloat_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateVectorFloat_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Target;
    
    UPROPERTY()
    float Value;
    
    CONTROLRIG_API FMathRBFInterpolateVectorFloat_Target();
};

