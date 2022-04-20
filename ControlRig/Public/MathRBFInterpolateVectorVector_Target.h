#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MathRBFInterpolateVectorVector_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateVectorVector_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Target;
    
    UPROPERTY()
    FVector Value;
    
    CONTROLRIG_API FMathRBFInterpolateVectorVector_Target();
};

