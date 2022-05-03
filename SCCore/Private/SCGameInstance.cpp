#include "SCGameInstance.h"

class UCheatData;

void USCGameInstance::UnlockInGameAchievement(const FGameplayTag& _achievementToUnlock) {
}

void USCGameInstance::UnlockAllInGameAchievements() {
}

void USCGameInstance::TriggerPGOWriteFile() {
}

void USCGameInstance::ResetAllInGameAchievements() {
}

void USCGameInstance::LockInGameAchievement(const FGameplayTag& _achievementToLock) {
}

UCheatData* USCGameInstance::BPF_GetCheatData(const FGameplayTag& _cheatTag) const {
    return NULL;
}

USCGameInstance::USCGameInstance() {
    this->m_bEnableDevMode = false;
}

