#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorClamp.generated.h"

USTRUCT()
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    FVector Minimum;
    
    UPROPERTY()
    FVector Maximum;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathVectorClamp();
};

