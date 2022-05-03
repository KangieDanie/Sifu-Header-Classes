#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkCommonInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkXboxOneApuHeapInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXboxOneAdvancedInitializationSettings.h"
#include "AkXboxOneInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkXboxOneInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkXboxOneAdvancedInitializationSettings AdvancedSettings;
    
    UAkXboxOneInitializationSettings();
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    
    // Fix for true pure virtual functions not being implemented
};

