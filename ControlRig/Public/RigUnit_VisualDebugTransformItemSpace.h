#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigElementKey.h"
#include "RigUnit_VisualDebugTransformItemSpace.generated.h"

USTRUCT()
struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase {
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
    FRigElementKey Space;
    
    CONTROLRIG_API FRigUnit_VisualDebugTransformItemSpace();
};

