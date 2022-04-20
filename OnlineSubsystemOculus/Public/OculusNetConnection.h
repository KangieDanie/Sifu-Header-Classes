#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "OculusNetConnection.generated.h"

UCLASS(NonTransient)
class UOculusNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UOculusNetConnection();
};

