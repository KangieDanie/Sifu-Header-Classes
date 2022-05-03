#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigUnit_GetControlVector2D.generated.h"

USTRUCT()
struct FRigUnit_GetControlVector2D : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    FVector2D Vector;
    
    UPROPERTY()
    FVector2D Minimum;
    
    UPROPERTY()
    FVector2D Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_GetControlVector2D();
};

