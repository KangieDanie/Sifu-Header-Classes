#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetConnection -FallbackName=NetConnection
#include "EOSNetConnection.generated.h"

UCLASS(NonTransient, Config=OnlineSubsystemRedpointEOS)
class UEOSNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UEOSNetConnection();
};

