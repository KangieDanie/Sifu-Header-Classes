#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_VisualDebugTransform.generated.h"

USTRUCT()
struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Value;
    
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    float Thickness;
    
    UPROPERTY()
    float Scale;
    
    UPROPERTY()
    FName BoneSpace;
    
    CONTROLRIG_API FRigUnit_VisualDebugTransform();
};

