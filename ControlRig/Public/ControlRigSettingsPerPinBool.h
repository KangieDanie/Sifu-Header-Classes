#pragma once
#include "CoreMinimal.h"
#include "ControlRigSettingsPerPinBool.generated.h"

USTRUCT()
struct FControlRigSettingsPerPinBool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, bool> Values;
    
    CONTROLRIG_API FControlRigSettingsPerPinBool();
};

