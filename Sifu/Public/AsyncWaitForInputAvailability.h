#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "InputAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "AsyncWaitForInputAvailability.generated.h"

class UAsyncWaitForInputAvailability;
class ABaseCharacter;

UCLASS()
class SIFU_API UAsyncWaitForInputAvailability : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnInputAvailable;
    
    UAsyncWaitForInputAvailability();
    UFUNCTION(BlueprintCallable)
    static UAsyncWaitForInputAvailability* BPF_WaitForInputAvailability(ABaseCharacter* _inCharacter, InputAction _eInInputAction);
    
};

