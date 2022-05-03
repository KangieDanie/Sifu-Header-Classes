#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorParallel.generated.h"

USTRUCT()
struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector A;
    
    UPROPERTY()
    FVector B;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathVectorParallel();
};

