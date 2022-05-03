#include "AchievementUnlockCondition.h"

class UWorld;

void UAchievementUnlockCondition::BPF_UnlockAchievement(bool _bShutdownCondition) {
}

void UAchievementUnlockCondition::BPF_SetAchievementTag(FGameplayTag _newAchievementTag) {
}

void UAchievementUnlockCondition::BPF_ConditionFailed() {
}




bool UAchievementUnlockCondition::BPE_CanBeUnlocked_Implementation(const UWorld* _world) const {
    return false;
}

UAchievementUnlockCondition::UAchievementUnlockCondition() {
    this->m_bUseCustomAchievementTag = true;
    this->m_World = NULL;
    this->m_bCheatsAllowed = false;
}

