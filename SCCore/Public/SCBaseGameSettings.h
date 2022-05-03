#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SCBaseGameSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SCCORE_API USCBaseGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool m_bHasCheats;
    
    USCBaseGameSettings();
};

