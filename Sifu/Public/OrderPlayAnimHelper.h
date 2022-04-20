#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "OrderPlayAnimHelper.generated.h"

class UOrderComponent;

UCLASS(BlueprintType)
class SIFU_API UOrderPlayAnimHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderPlayAnimHelper();
    UFUNCTION(BlueprintPure)
    static void BPF_GetOrderAnimContainer(UOrderComponent* _OrderComponent, uint8 _uiID, FAnimContainer& _outAnimContainer);
    
};

