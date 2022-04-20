#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MathRBFInterpolateQuatFloat_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateQuatFloat_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Target;
    
    UPROPERTY()
    float Value;
    
    CONTROLRIG_API FMathRBFInterpolateQuatFloat_Target();
};

