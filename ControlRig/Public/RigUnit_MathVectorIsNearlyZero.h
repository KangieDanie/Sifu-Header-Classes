#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorIsNearlyZero.generated.h"

USTRUCT()
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    float Tolerance;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathVectorIsNearlyZero();
};

