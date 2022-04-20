#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPOrderServiceInstance.h"
#include "EOrderType.h"
#include "OrderServiceInstanceHelper.generated.h"

class UOrderComponent;
class UOrderService;

UCLASS(BlueprintType)
class SIFU_API UOrderServiceInstanceHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderServiceInstanceHelper();
    UFUNCTION(BlueprintPure)
    static void BPF_GetOrderInstanceInfos(const FBPOrderServiceInstance& _orderServiceInstance, uint8& _uiOutOrder, EOrderType& _eOutType, UOrderComponent*& _OrderComponent);
    
    UFUNCTION(BlueprintCallable)
    static UOrderService* BPF_FindOrderServiceByClass(const FBPOrderServiceInstance& _myOrderServiceInstance, TSubclassOf<UOrderService> _class, FBPOrderServiceInstance& _resultOrderServiceInstance);
    
};

