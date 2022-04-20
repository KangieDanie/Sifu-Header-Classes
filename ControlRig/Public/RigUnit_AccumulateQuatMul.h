#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_AccumulateQuatMul.generated.h"

USTRUCT()
struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Multiplier;
    
    UPROPERTY()
    FQuat InitialValue;
    
    UPROPERTY()
    bool bFlipOrder;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    FQuat Result;
    
    UPROPERTY()
    FQuat AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateQuatMul();
};

