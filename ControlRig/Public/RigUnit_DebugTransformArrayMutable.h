#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ERigUnitDebugTransformMode.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_DebugTransformArrayMutable_WorkData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DebugTransformArrayMutable.generated.h"

USTRUCT()
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    ERigUnitDebugTransformMode Mode;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Thickness;
    
    UPROPERTY()
    float Scale;
    
    UPROPERTY()
    FName Space;
    
    UPROPERTY()
    FTransform WorldOffset;
    
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY(Transient)
    FRigUnit_DebugTransformArrayMutable_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_DebugTransformArrayMutable();
};

