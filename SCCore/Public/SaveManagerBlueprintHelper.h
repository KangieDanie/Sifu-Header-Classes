#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "SaveManagerBlueprintHelper.generated.h"

class USaveManagerDelegateHandler;
class USCSaveObjectPlayerProfile;
class USCSaveObjectGameData;

UCLASS(BlueprintType)
class SCCORE_API USaveManagerBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveManagerBlueprintHelper();
    UFUNCTION(BlueprintPure)
    static FString BPF_SwapSaveNameToAndFromBackup(const FString& _currentSaveName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetSaveSystemEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedLoadFirstSave();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedLoad(const FString& _saveName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetNeedCreateSaveGame(int32 _iSaveIndex);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsUsingDebugSaveLevelInPIE();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsUsingDebugGameFlowInPie();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsSaveSystemEnabled();
    
    UFUNCTION(BlueprintPure)
    static FTimespan BPF_GetTimePlayedInCurrentSave();
    
    UFUNCTION(BlueprintPure)
    static USaveManagerDelegateHandler* BPF_GetSaveManagerDelegateHandler();
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetSaveBackupSuffix();
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetPlayerSavesCount(bool _bValidOnly);
    
    UFUNCTION(BlueprintPure)
    static USCSaveObjectPlayerProfile* BPF_GetCurrentSaveProfile();
    
    UFUNCTION(BlueprintPure)
    static USCSaveObjectGameData* BPF_GetCurrentSaveGame();
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GenerateSaveNameFromIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GenerateIndexFromSaveName(const FString& _saveName);
    
};

