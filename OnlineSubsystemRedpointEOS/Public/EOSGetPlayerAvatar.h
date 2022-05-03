#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EOSGetPlayerAvatarCompletePinDelegate.h"
#include "EOSGetPlayerAvatar.generated.h"

class UEOSGetPlayerAvatar;
class UTexture;
class UObject;

UCLASS()
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSGetPlayerAvatar : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEOSGetPlayerAvatarCompletePin OnComplete;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    int32 LocalUserNum;
    
    UPROPERTY()
    FUniqueNetIdRepl UserId;
    
    UPROPERTY()
    UTexture* DefaultAvatar;
    
public:
    UEOSGetPlayerAvatar();
    UFUNCTION(BlueprintCallable)
    static UEOSGetPlayerAvatar* GetPlayerAvatar(const UObject* NewWorldContextObject, int32 NewLocalUserNum, FUniqueNetIdRepl NewUserId, UTexture* NewDefaultAvatar);
    
};

