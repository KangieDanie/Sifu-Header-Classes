#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_ChainHarmonics_Pendulum.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ChainHarmonics_Pendulum {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    float PendulumStiffness;
    
    UPROPERTY()
    FVector PendulumGravity;
    
    UPROPERTY()
    float PendulumBlend;
    
    UPROPERTY()
    float PendulumDrag;
    
    UPROPERTY()
    float PendulumMinimum;
    
    UPROPERTY()
    float PendulumMaximum;
    
    UPROPERTY()
    EControlRigAnimEasingType PendulumEase;
    
    UPROPERTY()
    FVector UnwindAxis;
    
    UPROPERTY()
    float UnwindMinimum;
    
    UPROPERTY()
    float UnwindMaximum;
    
    CONTROLRIG_API FRigUnit_ChainHarmonics_Pendulum();
};

