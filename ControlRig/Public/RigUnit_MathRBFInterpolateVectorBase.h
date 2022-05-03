#pragma once
#include "CoreMinimal.h"
#include "ERBFKernelType.h"
#include "RigUnit_MathRBFInterpolateBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathRBFInterpolateVectorWorkData.h"
#include "ERBFVectorDistanceType.h"
#include "RigUnit_MathRBFInterpolateVectorBase.generated.h"

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Input;
    
    UPROPERTY()
    ERBFVectorDistanceType DistanceFunction;
    
    UPROPERTY()
    ERBFKernelType SmoothingFunction;
    
    UPROPERTY()
    float SmoothingRadius;
    
    UPROPERTY()
    bool bNormalizeOutput;
    
    UPROPERTY(Transient)
    FRigUnit_MathRBFInterpolateVectorWorkData WorkData;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorBase();
};

