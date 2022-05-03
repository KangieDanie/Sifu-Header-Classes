#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkXSXAdvancedInitializationSettings.h"
#include "AkCommonInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkXSXApuHeapInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXSXInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkXSXInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkXSXApuHeapInitializationSettings ApuHeapSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkXSXAdvancedInitializationSettings AdvancedSettings;
    
    UAkXSXInitializationSettings();
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    
    // Fix for true pure virtual functions not being implemented
};

