#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_AccumulateQuatLerp.generated.h"

USTRUCT()
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat TargetValue;
    
    UPROPERTY()
    FQuat InitialValue;
    
    UPROPERTY()
    float Blend;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    FQuat Result;
    
    UPROPERTY()
    FQuat AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateQuatLerp();
};

