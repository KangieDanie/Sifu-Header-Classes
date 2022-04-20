#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "OculusUpdateSessionCallbackProxy.generated.h"

class UOculusUpdateSessionCallbackProxy;

UCLASS(MinimalAPI)
class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;
    
    UOculusUpdateSessionCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOculusUpdateSessionCallbackProxy* SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
    
};

