#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkCommonInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkPS5AdvancedInitializationSettings.h"
#include "AkPS5InitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkPS5InitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkPS5AdvancedInitializationSettings AdvancedSettings;
    
    UAkPS5InitializationSettings();
    
    // Fix for true pure virtual functions not being implemented
};

