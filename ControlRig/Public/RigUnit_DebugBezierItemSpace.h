#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_DebugBaseMutable.h"
#include "CRFourPointBezier.h"
#include "RigElementKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
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

