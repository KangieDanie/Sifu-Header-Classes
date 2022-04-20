#pragma once
#include "CoreMinimal.h"
#include "ControlRigIOSettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigIOSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUpdatePose;
    
    UPROPERTY()
    bool bUpdateCurves;
    
    FControlRigIOSettings();
};

