#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "BindableMaterialWidget.generated.h"

class UMaterialInstanceDynamic;

UCLASS(EditInlineNew)
class UBindableMaterialWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_MaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_FloatParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FloatValue;
    
    UPROPERTY()
    UWidget::FGetFloat FloatValueDelegate;
    
public:
    UBindableMaterialWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetMaterialInstance(UMaterialInstanceDynamic* _materialInstance);
    
};

