#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateVectorLerp.generated.h"

USTRUCT()
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector TargetValue;
    
    UPROPERTY()
    FVector InitialValue;
    
    UPROPERTY()
    float Blend;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    FVector Result;
    
    UPROPERTY()
    FVector AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateVectorLerp();
};

