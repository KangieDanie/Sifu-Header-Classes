#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "OculusCreateSessionCallbackProxy.generated.h"

class UOculusCreateSessionCallbackProxy;

UCLASS(MinimalAPI)
class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEmptyOnlineDelegate OnFailure;
    
    UOculusCreateSessionCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOculusCreateSessionCallbackProxy* CreateSession(int32 PublicConnections, const FString& OculusMatchmakingPool);
    
};

