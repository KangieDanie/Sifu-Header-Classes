#pragma once
#include "CoreMinimal.h"
#include "CRFourPointBezier.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "EControlRigCurveAlignment.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_FitChainToCurve_DebugSettings.h"
#include "EControlRigAnimEasingType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_FitChainToCurve_Rotation.h"
#include "RigUnit_FitChainToCurve_WorkData.h"
#include "RigUnit_FitChainToCurvePerItem.generated.h"

USTRUCT()
struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKeyCollection Items;
    
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
    
    CONTROLRIG_API FRigUnit_FitChainToCurvePerItem();
};

