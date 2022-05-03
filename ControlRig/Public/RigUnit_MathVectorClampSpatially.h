#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EControlRigClampSpatialMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathVectorClampSpatially.generated.h"

USTRUCT()
struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
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
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathVectorClampSpatially();
};

