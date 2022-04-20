#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_DebugBase.h"
#include "RigElementKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERigUnitVisualDebugPointMode.h"
#include "RigUnit_VisualDebugVectorItemSpace.generated.h"

USTRUCT()
struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    ERigUnitVisualDebugPointMode Mode;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Thickness;
    
    UPROPERTY()
    float Scale;
    
    UPROPERTY()
    FRigElementKey Space;
    
    CONTROLRIG_API FRigUnit_VisualDebugVectorItemSpace();
};
