#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBaseMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CRFourPointBezier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigElementKey.h"
#include "RigUnit_DebugBezierItemSpace.generated.h"

USTRUCT()
struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCRFourPointBezier Bezier;
    
    UPROPERTY()
    float MinimumU;
    
    UPROPERTY()
    float MaximumU;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Thickness;
    
    UPROPERTY()
    int32 Detail;
    
    UPROPERTY()
    FRigElementKey Space;
    
    UPROPERTY()
    FTransform WorldOffset;
    
    UPROPERTY()
    bool bEnabled;
    
    CONTROLRIG_API FRigUnit_DebugBezierItemSpace();
};

