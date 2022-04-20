#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigElementKey.h"
#include "RigUnit_VisualDebugQuatItemSpace.generated.h"

USTRUCT()
struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase {
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
    FRigElementKey Space;
    
    CONTROLRIG_API FRigUnit_VisualDebugQuatItemSpace();
};

