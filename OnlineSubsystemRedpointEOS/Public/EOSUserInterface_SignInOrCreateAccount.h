#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EOSUserInterface_SignInOrCreateAccount.generated.h"

class UEOSUserInterface_SignInOrCreateAccount_Context;

UINTERFACE(Blueprintable, MinimalAPI)
class UEOSUserInterface_SignInOrCreateAccount : public UInterface {
    GENERATED_BODY()
};

class IEOSUserInterface_SignInOrCreateAccount : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupUserInterface(UEOSUserInterface_SignInOrCreateAccount_Context* Context);
    
};

