#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBaseMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigElementKey.h"
#include "RigUnit_DebugArcItemSpace.generated.h"

USTRUCT()
struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    float MinimumDegrees;
    
    UPROPERTY()
    float MaximumDegrees;
    
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
    
    CONTROLRIG_API FRigUnit_DebugArcItemSpace();
};

