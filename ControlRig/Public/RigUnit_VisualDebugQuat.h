#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_VisualDebugQuat.generated.h"

USTRUCT()
struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Value;
    
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    float Thickness;
    
    UPROPERTY()
    float Scale;
    
    UPROPERTY()
    FName BoneSpace;
    
    CONTROLRIG_API FRigUnit_VisualDebugQuat();
};

