#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_NoiseVector.generated.h"

USTRUCT()
struct FRigUnit_NoiseVector : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Position;
    
    UPROPERTY()
    FVector Speed;
    
    UPROPERTY()
    FVector Frequency;
    
    UPROPERTY()
    float Minimum;
    
    UPROPERTY()
    float Maximum;
    
    UPROPERTY()
    FVector Result;
    
    UPROPERTY()
    FVector Time;
    
    CONTROLRIG_API FRigUnit_NoiseVector();
};

