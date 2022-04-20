#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "MathRBFInterpolateQuatXform_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateQuatXform_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Target;
    
    UPROPERTY()
    FTransform Value;
    
    CONTROLRIG_API FMathRBFInterpolateQuatXform_Target();
};

