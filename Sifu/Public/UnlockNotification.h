#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "ECharacterProgressionRewardTypes.h"
#include "LootBoxTypeCountStruct.h"
#include "ProgressionDoorStruct.h"
#include "LootBaseItemStruct.h"
#include "UnlockNotification.generated.h"

class UCharacterProgressionUnlockDB;
class UQuestItemData;

UCLASS(EditInlineNew)
class SIFU_API UUnlockNotification : public USCUserWidget {
    GENERATED_BODY()
public:
    UUnlockNotification();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitWithProgressionDoorStruct(const FProgressionDoorStruct& _progressionDoorStruct, const UQuestItemData* _lastFulfilledQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitWithLootBox(const FLootBoxTypeCountStruct& _LootBoxes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitWithLoot(const FLootBaseItemStruct& _loot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitWithCharacterProgression(ECharacterProgressionRewardTypes _reward, UCharacterProgressionUnlockDB* _unlock);
    
};

