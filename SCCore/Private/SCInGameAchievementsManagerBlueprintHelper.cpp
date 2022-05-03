#include "SCInGameAchievementsManagerBlueprintHelper.h"

class USCInGameAchievementsManagerSettings;
class UAchievementUnlockCondition;

void USCInGameAchievementsManagerBlueprintHelper::BPF_RemoveObjectFromNewlyUnlocked(FGameplayTag _newlyUnlockedCategory, FGameplayTag _objectToRemove) {
}

void USCInGameAchievementsManagerBlueprintHelper::BPF_OnMatchEnded(bool _bHasWon) {
}

bool USCInGameAchievementsManagerBlueprintHelper::BPF_IsObjectUnlocked(FGameplayTag _objectTag) {
    return false;
}

bool USCInGameAchievementsManagerBlueprintHelper::BPF_IsObjectNewlyUnlocked(FGameplayTag _newlyUnlockedCategory, FGameplayTag _objectTag) {
    return false;
}

bool USCInGameAchievementsManagerBlueprintHelper::BPF_IsAchievementUnlocked(FGameplayTag _achievementTag) {
    return false;
}

bool USCInGameAchievementsManagerBlueprintHelper::BPF_GetObjectUnlockInfo(FGameplayTag _objectTag, FAchievementUnlockConditionStruct& _outObjectUnlockCondition) {
    return false;
}

FGameplayTagContainer USCInGameAchievementsManagerBlueprintHelper::BPF_GetObjectsNewlyUnlocked(FGameplayTag _newlyUnlockCategory) {
    return FGameplayTagContainer{};
}

TArray<UAchievementUnlockCondition*> USCInGameAchievementsManagerBlueprintHelper::BPF_GetCurrentAchievementsToUnlock() {
    return TArray<UAchievementUnlockCondition*>();
}

TArray<UAchievementUnlockCondition*> USCInGameAchievementsManagerBlueprintHelper::BPF_GetAllAchievementsToUnlock() {
    return TArray<UAchievementUnlockCondition*>();
}

USCInGameAchievementsManagerSettings* USCInGameAchievementsManagerBlueprintHelper::BPF_GetAchievementManagerSettings() {
    return NULL;
}

UAchievementUnlockCondition* USCInGameAchievementsManagerBlueprintHelper::BPF_GetAchievementConditionFromTag(FGameplayTag _achievementTag) {
    return NULL;
}

void USCInGameAchievementsManagerBlueprintHelper::BPF_AllowOnObjectUnlockedBroadcast(bool _bAllowBroadcast) {
}

USCInGameAchievementsManagerBlueprintHelper::USCInGameAchievementsManagerBlueprintHelper() {
}

