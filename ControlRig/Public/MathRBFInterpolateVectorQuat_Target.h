#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MathRBFInterpolateVectorQuat_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateVectorQuat_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Target;
    
    UPROPERTY()
    FQuat Value;
    
    CONTROLRIG_API FMathRBFInterpolateVectorQuat_Target();
};

