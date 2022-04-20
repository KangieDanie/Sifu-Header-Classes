#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MathRBFInterpolateQuatColor_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateQuatColor_Target {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Target;
    
    UPROPERTY()
    FLinearColor Value;
    
    CONTROLRIG_API FMathRBFInterpolateQuatColor_Target();
};

