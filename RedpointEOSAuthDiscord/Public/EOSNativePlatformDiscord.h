#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemRedpointEOS -ObjectName=EOSNativePlatform -FallbackName=EOSNativePlatform
#include "EOSNativePlatformDiscord.generated.h"

UCLASS()
class UEOSNativePlatformDiscord : public UObject, public IEOSNativePlatform {
    GENERATED_BODY()
public:
    UEOSNativePlatformDiscord();
    
    // Fix for true pure virtual functions not being implemented
};

