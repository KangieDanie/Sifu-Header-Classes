#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "OculusNetDriver.generated.h"

UCLASS(NonTransient)
class UOculusNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UOculusNetDriver();
};

