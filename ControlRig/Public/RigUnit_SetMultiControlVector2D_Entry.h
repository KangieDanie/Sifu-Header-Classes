#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigUnit_SetMultiControlVector2D_Entry.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetMultiControlVector2D_Entry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    FVector2D Vector;
    
    CONTROLRIG_API FRigUnit_SetMultiControlVector2D_Entry();
};

