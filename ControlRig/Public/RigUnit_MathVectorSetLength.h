#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorSetLength.generated.h"

USTRUCT()
struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    float Length;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathVectorSetLength();
};

