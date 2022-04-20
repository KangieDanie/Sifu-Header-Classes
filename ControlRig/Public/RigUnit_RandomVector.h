#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_RandomVector.generated.h"

USTRUCT()
struct FRigUnit_RandomVector : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Seed;
    
    UPROPERTY()
    float Minimum;
    
    UPROPERTY()
    float Maximum;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    FVector Result;
    
    UPROPERTY()
    FVector LastResult;
    
    UPROPERTY()
    int32 LastSeed;
    
    UPROPERTY()
    float TimeLeft;
    
    CONTROLRIG_API FRigUnit_RandomVector();
};

