#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseRestoreResult2Delegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseProductRequest2.h"
#include "InAppPurchaseRestoreCallbackProxy2.generated.h"

class UInAppPurchaseRestoreCallbackProxy2;
class APlayerController;

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseRestoreResult2 OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseRestoreResult2 OnFailure;
    
    UInAppPurchaseRestoreCallbackProxy2();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController);
    
};

