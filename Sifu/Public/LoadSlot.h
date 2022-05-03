#pragma once
#include "CoreMinimal.h"
#include "MenuSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CharacterSaveDescription -FallbackName=CharacterSaveDescription
#include "LoadSlot.generated.h"

class ULoadChoices;

UCLASS(EditInlineNew)
class SIFU_API ULoadSlot : public UMenuSlot {
    GENERATED_BODY()
public:
    ULoadSlot();
    UFUNCTION(BlueprintCallable)
    uint8 BPF_GetSlotIndex();
    
    UFUNCTION(BlueprintPure)
    FString BPF_GetSaveName() const;
    
    UFUNCTION(BlueprintPure)
    FCharacterSaveDescription BPF_GetSaveDescription();
    
    UFUNCTION(BlueprintCallable)
    ULoadChoices* BPF_GetLoadPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_InitSlot(FCharacterSaveDescription _save);
    
};

