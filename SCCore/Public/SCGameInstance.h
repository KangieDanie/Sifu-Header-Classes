#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCGameInstance.generated.h"

class UObject;
class UCheatData;

UCLASS(NonTransient)
class SCCORE_API USCGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UCheatData>> m_CheatData;
    
private:
    UPROPERTY(Config)
    bool m_bEnableDevMode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UObject*> m_ObjectToLoadAtBegining;
    
public:
    USCGameInstance();
private:
    UFUNCTION(Exec)
    void UnlockInGameAchievement(const FGameplayTag& _achievementToUnlock);
    
    UFUNCTION(Exec)
    void UnlockAllInGameAchievements();
    
    UFUNCTION(Exec)
    void TriggerPGOWriteFile();
    
    UFUNCTION(Exec)
    void ResetAllInGameAchievements();
    
    UFUNCTION(Exec)
    void LockInGameAchievement(const FGameplayTag& _achievementToLock);
    
public:
    UFUNCTION(BlueprintPure)
    UCheatData* BPF_GetCheatData(const FGameplayTag& _cheatTag) const;
    
};

