#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCSaveObjectGameData -FallbackName=SCSaveObjectGameData
#include "GameSaveData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ECharacterStat.h"
#include "DuplicatedSaveData.h"
#include "WGSaveObjectGameData.generated.h"

UCLASS()
class SIFU_API UWGSaveObjectGameData : public USCSaveObjectGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameSaveData m_SavedData;
    
    UWGSaveObjectGameData();
    UFUNCTION(BlueprintCallable)
    void ReloadDefaultStatsFromDataTable();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_HasGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintPure)
    float BPF_GetDefaultStatValue(ECharacterStat _eStat, bool& _bFound) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddOrUpdateMaskSnapshot(int32 _iMask, const FDuplicatedSaveData& _duplicatedData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddGameplayTag(FGameplayTag _gameplayTagToAdd);
    
    UFUNCTION(BlueprintNativeEvent)
    FString BPE_SnapshotSaveMask(int32 _iSaveMaskToBackup);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool BPE_ShouldLoadAntiCheatMap() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString BPE_OverrideSaveMaskWithSnapshot(int32 _iSnapshotIdx);
    
    UFUNCTION(BlueprintNativeEvent)
    int32 BPE_GenerateGlobalAllowedSaveMask() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_CopyToSaveWithMask(USCSaveObjectGameData* _inSaveTo, int32 _iTestMask);
    
};

