#pragma once
#include "CoreMinimal.h"
#include "RigUnit_FitChainToCurve_DebugSettings.h"
#include "CRFourPointBezier.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "EControlRigCurveAlignment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_FitChainToCurve_Rotation.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_FitChainToCurve_WorkData.h"
#include "RigUnit_FitChainToCurve.generated.h"

USTRUCT()
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StartBone;
    
    UPROPERTY()
    FName EndBone;
    
    UPROPERTY()
    FCRFourPointBezier Bezier;
    
    UPROPERTY()
    EControlRigCurveAlignment Alignment;
    
    UPROPERTY()
    float Minimum;
    
    UPROPERTY()
    float Maximum;
    
    UPROPERTY()
    int32 SamplingPrecision;
    
    UPROPERTY()
    FVector PrimaryAxis;
    
    UPROPERTY()
    FVector SecondaryAxis;
    
    UPROPERTY()
    FVector PoleVectorPosition;
    
    UPROPERTY()
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    
    UPROPERTY()
    EControlRigAnimEasingType RotationEaseType;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    
    UPROPERTY(Transient)
    FRigUnit_FitChainToCurve_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_FitChainToCurve();
};

