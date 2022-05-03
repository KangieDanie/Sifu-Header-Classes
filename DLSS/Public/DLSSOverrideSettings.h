#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EDLSSSettingOverride.h"
#include "DLSSOverrideSettings.generated.h"

UCLASS(ProjectUserConfig)
class DLSS_API UDLSSOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;
    
    UPROPERTY(Config, EditAnywhere)
    EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride;
    
    UPROPERTY(Config, EditAnywhere)
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    
    UPROPERTY(Config, EditAnywhere)
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;
    
    UDLSSOverrideSettings();
};

