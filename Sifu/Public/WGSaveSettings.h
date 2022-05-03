#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SaveSettings -FallbackName=SaveSettings
#include "GameOptionMappingRange.h"
#include "WGSaveSettings.generated.h"

class UCharacterBuildDB;

UCLASS()
class SIFU_API UWGSaveSettings : public USaveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    TSoftObjectPtr<UCharacterBuildDB> m_DefaultBuild;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FGameOptionMappingRange m_GameOptionValue[40];
    
    UWGSaveSettings();
};

