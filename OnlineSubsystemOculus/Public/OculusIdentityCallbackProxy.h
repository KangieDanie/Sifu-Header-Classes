#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "OculusIdentitySuccessResultDelegate.h"
#include "OculusIdentityFailureResultDelegate.h"
#include "OculusIdentityCallbackProxy.generated.h"

class UOculusIdentityCallbackProxy;

UCLASS(MinimalAPI)
class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOculusIdentitySuccessResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOculusIdentityFailureResult OnFailure;
    
    UOculusIdentityCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOculusIdentityCallbackProxy* GetOculusIdentity(int32 LocalUserNum);
    
};

