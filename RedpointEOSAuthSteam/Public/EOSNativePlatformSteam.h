#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemRedpointEOS -ObjectName=EOSNativePlatform -FallbackName=EOSNativePlatform
#include "EOSNativePlatformSteam.generated.h"

UCLASS()
class UEOSNativePlatformSteam : public UObject, public IEOSNativePlatform {
    GENERATED_BODY()
public:
    UEOSNativePlatformSteam();
    
    // Fix for true pure virtual functions not being implemented
};

