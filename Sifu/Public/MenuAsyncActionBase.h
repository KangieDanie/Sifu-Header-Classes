#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EMenuEnum.h"
#include "MenuAsyncActionBase.generated.h"

UCLASS()
class UMenuAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UMenuAsyncActionBase();
private:
    UFUNCTION()
    void OnCurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
};

