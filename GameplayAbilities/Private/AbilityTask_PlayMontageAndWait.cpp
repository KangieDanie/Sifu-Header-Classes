#include "AbilityTask_PlayMontageAndWait.h"

class UAnimMontage;
class UGameplayAbility;
class UAbilityTask_PlayMontageAndWait;

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted() {
}

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds) {
    return NULL;
}

UAbilityTask_PlayMontageAndWait::UAbilityTask_PlayMontageAndWait() {
    this->MontageToPlay = NULL;
    this->Rate = 1.00f;
    this->AnimRootMotionTranslationScale = 0.00f;
    this->StartTimeSeconds = 0.00f;
    this->bStopWhenAbilityEnds = true;
}

