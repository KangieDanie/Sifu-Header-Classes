#include "GameplayAbilityRepAnimMontage.h"

FGameplayAbilityRepAnimMontage::FGameplayAbilityRepAnimMontage() {
    this->AnimMontage = NULL;
    this->PlayRate = 0.00f;
    this->Position = 0.00f;
    this->BlendTime = 0.00f;
    this->NextSectionID = 0;
    this->bRepPosition = false;
    this->IsStopped = false;
    this->ForcePlayBit = false;
    this->SkipPositionCorrection = false;
    this->bSkipPlayRate = false;
    this->SectionIdToPlay = 0;
}

