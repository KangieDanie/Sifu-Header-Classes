#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MathRBFInterpolateVectorColor_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateVectorColor_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Target;
    
    UPROPERTY()
    FLinearColor Value;
    
    CONTROLRIG_API FMathRBFInterpolateVectorColor_Target();
};

