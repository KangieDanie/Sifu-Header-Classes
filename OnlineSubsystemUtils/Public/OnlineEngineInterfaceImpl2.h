#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineEngineInterface -FallbackName=OnlineEngineInterface
#include "OnlineEngineInterfaceImpl2.generated.h"

UCLASS(Transient)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    FName VoiceSubsystemNameOverride;
    
public:
    UOnlineEngineInterfaceImpl();
};

