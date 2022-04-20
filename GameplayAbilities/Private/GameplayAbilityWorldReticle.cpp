#include "GameplayAbilityWorldReticle.h"






void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D) {
}

AGameplayAbilityWorldReticle::AGameplayAbilityWorldReticle() {
    this->bFaceOwnerFlat = true;
    this->bSnapToTargetedActor = false;
    this->bIsTargetValid = true;
    this->bIsTargetAnActor = false;
    this->MasterPC = NULL;
    this->TargetingActor = NULL;
}

