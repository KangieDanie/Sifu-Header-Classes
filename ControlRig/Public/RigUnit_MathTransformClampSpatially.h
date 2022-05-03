#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EControlRigClampSpatialMode.h"
#include "RigUnit_MathTransformClampSpatially.generated.h"

USTRUCT()
struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Value;
    
    UPROPERTY()
    TEnumAsByte<EAxis::Type> Axis;
    
    UPROPERTY()
    TEnumAsByte<EControlRigClampSpatialMode::Type> Type;
    
    UPROPERTY()
    float Minimum;
    
    UPROPERTY()
    float Maximum;
    
    UPROPERTY()
    FTransform Space;
    
    UPROPERTY()
    bool bDrawDebug;
    
    UPROPERTY()
    FLinearColor DebugColor;
    
    UPROPERTY()
    float DebugThickness;
    
    UPROPERTY()
    FTransform Result;
    
    CONTROLRIG_API FRigUnit_MathTransformClampSpatially();
};

