#include "GameplayCueNotify_Actor.h"

class AActor;

bool AGameplayCueNotify_Actor::WhileActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) {
    return false;
}

bool AGameplayCueNotify_Actor::OnRemove_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) {
    return false;
}

void AGameplayCueNotify_Actor::OnOwnerDestroyed(AActor* DestroyedActor) {
}

bool AGameplayCueNotify_Actor::OnExecute_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) {
    return false;
}

bool AGameplayCueNotify_Actor::OnActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) {
    return false;
}


void AGameplayCueNotify_Actor::K2_EndGameplayCue() {
}

AGameplayCueNotify_Actor::AGameplayCueNotify_Actor() {
    this->bAutoDestroyOnRemove = false;
    this->AutoDestroyDelay = 0.00f;
    this->WarnIfTimelineIsStillRunning = true;
    this->WarnIfLatentActionIsStillRunning = true;
    this->bAutoAttachToOwner = false;
    this->IsOverride = true;
    this->bUniqueInstancePerInstigator = false;
    this->bUniqueInstancePerSourceObject = false;
    this->bAllowMultipleOnActiveEvents = true;
    this->bAllowMultipleWhileActiveEvents = true;
    this->NumPreallocatedInstances = 0;
}

