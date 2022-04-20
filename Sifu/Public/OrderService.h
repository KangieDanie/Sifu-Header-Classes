#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BPOrderServiceInstance.h"
#include "OrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UOrderService : public UObject {
    GENERATED_BODY()
public:
    UOrderService();
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnInit(const FBPOrderServiceInstance& _instance);
    
};

