#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "PostEventAsyncOutputPinDelegate.h"
#include "AkExternalSourceInfo.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "PostEventAsync.generated.h"

class UAkAudioEvent;
class UPostEventAsync;
class UObject;
class AActor;

UCLASS()
class AKAUDIO_API UPostEventAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPostEventAsyncOutputPin Completed;
    
    UPostEventAsync();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAsync* PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);
    
private:
    UFUNCTION()
    void PollPostEventFuture();
    
};

