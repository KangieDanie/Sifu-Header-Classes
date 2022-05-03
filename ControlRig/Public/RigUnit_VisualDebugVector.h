#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERigUnitVisualDebugPointMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_VisualDebugVector.generated.h"

USTRUCT()
struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase {
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
    FName BoneSpace;
    
    CONTROLRIG_API FRigUnit_VisualDebugVector();
};

