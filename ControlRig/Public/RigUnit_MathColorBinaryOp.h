#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathColorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_MathColorBinaryOp.generated.h"

USTRUCT()
struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLinearColor A;
    
    UPROPERTY()
    FLinearColor B;
    
    UPROPERTY()
    FLinearColor Result;
    
    CONTROLRIG_API FRigUnit_MathColorBinaryOp();
};

