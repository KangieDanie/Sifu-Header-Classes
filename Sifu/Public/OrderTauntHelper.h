#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OrderTauntHelper.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API UOrderTauntHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderTauntHelper();
    UFUNCTION(BlueprintCallable)
    static void BP_TriggerTauntEffects(AActor* _Instigator);
    
};

