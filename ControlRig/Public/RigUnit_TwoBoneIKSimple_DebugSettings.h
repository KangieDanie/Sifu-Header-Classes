#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_TwoBoneIKSimple_DebugSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_TwoBoneIKSimple_DebugSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    FTransform WorldOffset;
    
    CONTROLRIG_API FRigUnit_TwoBoneIKSimple_DebugSettings();
};

