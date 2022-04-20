#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "EOSIpNetConnection.generated.h"

UCLASS(NonTransient, Config=OnlineSubsystemRedpointEOS)
class UEOSIpNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UEOSIpNetConnection();
};

