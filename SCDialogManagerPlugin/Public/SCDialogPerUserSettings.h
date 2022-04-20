#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "SCDialogPerUserSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class SCDIALOGMANAGERPLUGIN_API USCDialogPerUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath m_DialogProjectPath;
    
    USCDialogPerUserSettings();
};

