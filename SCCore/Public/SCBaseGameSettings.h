#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SCBaseGameSettings.generated.h"

UCLASS()
class SCCORE_API USCBaseGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    USCBaseGameSettings();
};

