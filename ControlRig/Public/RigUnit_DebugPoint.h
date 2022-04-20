#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ERigUnitDebugPointMode.h"
#include "RigUnit_DebugBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DebugPoint.generated.h"

USTRUCT()
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    ERigUnitDebugPointMode Mode;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Scale;
    
    UPROPERTY()
    float Thickness;
    
    UPROPERTY()
    FName Space;
    
    UPROPERTY()
    FTransform WorldOffset;
    
    UPROPERTY()
    bool bEnabled;
    
    CONTROLRIG_API FRigUnit_DebugPoint();
};

