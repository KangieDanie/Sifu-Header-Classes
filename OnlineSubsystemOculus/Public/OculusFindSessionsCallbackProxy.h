#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintFindSessionsResultDelegate__DelegateSignature -FallbackName=BlueprintFindSessionsResultDelegateDelegate
#include "OculusFindSessionsCallbackProxy.generated.h"

class UOculusFindSessionsCallbackProxy;

UCLASS(MinimalAPI)
class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBlueprintFindSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintFindSessionsResultDelegate OnFailure;
    
    UOculusFindSessionsCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    static UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32 MaxResults, const FString& OculusMatchmakingPool);
    
};

