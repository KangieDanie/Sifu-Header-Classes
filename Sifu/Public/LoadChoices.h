#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "MenuItem.h"
#include "LoadChoices.generated.h"

class UPanelWidget;
class ULoadSlot;
class UWidget;

UCLASS(EditInlineNew)
class SIFU_API ULoadChoices : public UMenuItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<UPanelWidget> m_SlotsBox;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULoadSlot> m_LoadingButtonClass;
    
    UPROPERTY(EditAnywhere)
    FMargin m_SlotsPadding;
    
public:
    ULoadChoices();
    UFUNCTION(BlueprintCallable)
    void BPF_SetFocusedIndex(uint8 _uiIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_HideWidgetAndSetFocusOnFirstSlot(UWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_FillLoadChoices();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DeleteSelectedSave();
    
};

