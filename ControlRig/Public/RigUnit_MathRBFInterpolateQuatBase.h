#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathRBFInterpolateQuatWorkData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathRBFInterpolateBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERBFQuatDistanceType.h"
#include "ERBFKernelType.h"
#include "RigUnit_MathRBFInterpolateQuatBase.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Input;
    
    UPROPERTY()
    ERBFQuatDistanceType DistanceFunction;
    
    UPROPERTY()
    ERBFKernelType SmoothingFunction;
    
    UPROPERTY()
    float SmoothingAngle;
    
    UPROPERTY()
    bool bNormalizeOutput;
    
    UPROPERTY()
    FVector TwistAxis;
    
    UPROPERTY(Transient)
    FRigUnit_MathRBFInterpolateQuatWorkData WorkData;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatBase();
};

