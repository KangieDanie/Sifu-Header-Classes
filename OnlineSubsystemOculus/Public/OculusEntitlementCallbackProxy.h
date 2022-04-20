#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "OculusEntitlementCheckResultDelegate.h"
#include "OculusEntitlementCallbackProxy.generated.h"

class UOculusEntitlementCallbackProxy;

UCLASS(MinimalAPI)
class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOculusEntitlementCheckResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOculusEntitlementCheckResult OnFailure;
    
    UOculusEntitlementCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOculusEntitlementCallbackProxy* VerifyEntitlement();
    
};

