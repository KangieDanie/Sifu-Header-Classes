#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorSelectBool.generated.h"

USTRUCT()
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Condition;
    
    UPROPERTY()
    FVector IfTrue;
    
    UPROPERTY()
    FVector IfFalse;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathVectorSelectBool();
};

