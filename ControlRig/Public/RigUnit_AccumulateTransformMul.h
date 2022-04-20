#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_AccumulateTransformMul.generated.h"

USTRUCT()
struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Multiplier;
    
    UPROPERTY()
    FTransform InitialValue;
    
    UPROPERTY()
    bool bFlipOrder;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    FTransform Result;
    
    UPROPERTY()
    FTransform AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateTransformMul();
};

