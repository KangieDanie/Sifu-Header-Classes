#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilePath -FallbackName=FilePath
#include "AkSettingsPerUser.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class AKAUDIO_API UAkSettingsPerUser : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseMacInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableAutomaticAssetSynchronization;
    
    UPROPERTY(Config, EditAnywhere)
    FString WaapiIPAddress;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 WaapiPort;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoConnectToWAAPI;
    
    UPROPERTY(Config, EditAnywhere)
    bool AutoSyncSelection;
    
    UPROPERTY(Config)
    bool SuppressWwiseProjectPathWarnings;
    
    UPROPERTY(Config)
    bool SoundDataGenerationSkipLanguage;
    
    UAkSettingsPerUser();
};

