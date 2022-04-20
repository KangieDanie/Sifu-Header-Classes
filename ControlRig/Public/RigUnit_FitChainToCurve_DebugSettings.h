#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_FitChainToCurve_DebugSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FitChainToCurve_DebugSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    FLinearColor CurveColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SegmentsColor;
    
    UPROPERTY(EditAnywhere)
    FTransform WorldOffset;
    
    CONTROLRIG_API FRigUnit_FitChainToCurve_DebugSettings();
};

