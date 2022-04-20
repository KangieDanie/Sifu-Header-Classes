#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_MathColorFromFloat.generated.h"

USTRUCT()
struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    FLinearColor Result;
    
    CONTROLRIG_API FRigUnit_MathColorFromFloat();
};

