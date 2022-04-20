#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SCEOSSettings.generated.h"

UCLASS(DefaultConfig, Config=SCCore)
class ONLINESUBSYSTEMREDPOINTEOS_API USCEOSSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FString> Entitlements;
    
    USCEOSSettings();
};

