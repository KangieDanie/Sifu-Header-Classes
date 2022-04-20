#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RigUnit_AnimEvalRichCurve.generated.h"

USTRUCT()
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    FRuntimeFloatCurve Curve;
    
    UPROPERTY()
    float SourceMinimum;
    
    UPROPERTY()
    float SourceMaximum;
    
    UPROPERTY()
    float TargetMinimum;
    
    UPROPERTY()
    float TargetMaximum;
    
    UPROPERTY()
    float Result;
    
    CONTROLRIG_API FRigUnit_AnimEvalRichCurve();
};

