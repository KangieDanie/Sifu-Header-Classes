#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_MathColorLerp.generated.h"

USTRUCT()
struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLinearColor A;
    
    UPROPERTY()
    FLinearColor B;
    
    UPROPERTY()
    float T;
    
    UPROPERTY()
    FLinearColor Result;
    
    CONTROLRIG_API FRigUnit_MathColorLerp();
};

