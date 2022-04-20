#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MenuAsyncActionBaseHelper.generated.h"

class UMenuAsyncActionBase;

UCLASS(BlueprintType)
class SIFU_API UMenuAsyncActionBaseHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMenuAsyncActionBaseHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_CancelAsyncAction(UMenuAsyncActionBase* _action);
    
};

