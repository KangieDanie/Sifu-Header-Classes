#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameUserSettings -FallbackName=GameUserSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=DLSSBlueprint -ObjectName=UDLSSMode -FallbackName=UDLSSMode
#include "WGGameUserSettings.generated.h"

UCLASS(Config=User)
class SIFU_API UWGGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    UDLSSMode DLSSQuality;
    
    UWGGameUserSettings();
};

