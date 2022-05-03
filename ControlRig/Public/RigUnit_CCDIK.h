#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CCDIK_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_CCDIK_RotationLimit.h"
#include "RigUnit_CCDIK.generated.h"

USTRUCT()
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StartBone;
    
    UPROPERTY()
    FName EffectorBone;
    
    UPROPERTY()
    FTransform EffectorTransform;
    
    UPROPERTY()
    float Precision;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    int32 MaxIterations;
    
    UPROPERTY()
    bool bStartFromTail;
    
    UPROPERTY()
    float BaseRotationLimit;
    
    UPROPERTY()
    TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FRigUnit_CCDIK_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_CCDIK();
};

