#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "EOSNetDriver.generated.h"

UCLASS(NonTransient, Config=OnlineSubsystemRedpointEOS)
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UEOSNetDriver();
};

