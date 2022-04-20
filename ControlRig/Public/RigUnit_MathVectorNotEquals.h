#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorNotEquals.generated.h"

USTRUCT()
struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector A;
    
    UPROPERTY()
    FVector B;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathVectorNotEquals();
};

