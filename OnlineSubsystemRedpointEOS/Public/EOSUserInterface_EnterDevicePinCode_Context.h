#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOSUserInterface_EnterDevicePinCode_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_EnterDevicePinCode_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_EnterDevicePinCode_Context();
    UFUNCTION(BlueprintCallable)
    void CancelLogin();
    
};

