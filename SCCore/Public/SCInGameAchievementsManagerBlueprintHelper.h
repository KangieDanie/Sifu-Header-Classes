#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AchievementUnlockConditionStruct.h"
#include "SCInGameAchievementsManagerBlueprintHelper.generated.h"

class USCInGameAchievementsManagerSettings;
class UAchievementUnlockCondition;

UCLASS(BlueprintType)
class SCCORE_API USCInGameAchievementsManagerBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCInGameAchievementsManagerBlueprintHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_RemoveObjectFromNewlyUnlocked(FGameplayTag _newlyUnlockedCategory, FGameplayTag _objectToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_OnMatchEnded(bool _bHasWon);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsObjectUnlocked(FGameplayTag _objectTag);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsObjectNewlyUnlocked(FGameplayTag _newlyUnlockedCategory, FGameplayTag _objectTag);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsAchievementUnlocked(FGameplayTag _achievementTag);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetObjectUnlockInfo(FGameplayTag _objectTag, FAchievementUnlockConditionStruct& _outObjectUnlockCondition);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer BPF_GetObjectsNewlyUnlocked(FGameplayTag _newlyUnlockCategory);
    
    UFUNCTION(BlueprintPure)
    static TArray<UAchievementUnlockCondition*> BPF_GetCurrentAchievementsToUnlock();
    
    UFUNCTION(BlueprintPure)
    static TArray<UAchievementUnlockCondition*> BPF_GetAllAchievementsToUnlock();
    
    UFUNCTION(BlueprintPure)
    static USCInGameAchievementsManagerSettings* BPF_GetAchievementManagerSettings();
    
    UFUNCTION(BlueprintPure)
    static UAchievementUnlockCondition* BPF_GetAchievementConditionFromTag(FGameplayTag _achievementTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AllowOnObjectUnlockedBroadcast(bool _bAllowBroadcast);
    
};

