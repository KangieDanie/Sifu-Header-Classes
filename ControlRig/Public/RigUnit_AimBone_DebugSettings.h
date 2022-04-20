#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_AimBone_DebugSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AimBone_DebugSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    FTransform WorldOffset;
    
    CONTROLRIG_API FRigUnit_AimBone_DebugSettings();
};

