#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_DebugBaseMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigElementKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DebugLineStripItemSpace.generated.h"

USTRUCT()
struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Points;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Thickness;
    
    UPROPERTY()
    FRigElementKey Space;
    
    UPROPERTY()
    FTransform WorldOffset;
    
    UPROPERTY()
    bool bEnabled;
    
    CONTROLRIG_API FRigUnit_DebugLineStripItemSpace();
};

