#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OrderStartingDynamicDelegateDelegate.h"
#include "OrderDelegateHandler.generated.h"

UCLASS()
class SIFU_API UOrderDelegateHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnStarting;
    
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnEnding;
    
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnEnded;
    
    UPROPERTY(BlueprintAssignable)
    FOrderStartingDynamicDelegate m_OnCanceled;
    
    UOrderDelegateHandler();
};

