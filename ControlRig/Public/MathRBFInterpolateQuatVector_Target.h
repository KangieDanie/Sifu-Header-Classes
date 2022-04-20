#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MathRBFInterpolateQuatVector_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateQuatVector_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Target;
    
    UPROPERTY()
    FVector Value;
    
    CONTROLRIG_API FMathRBFInterpolateQuatVector_Target();
};

