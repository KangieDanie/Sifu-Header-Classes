#include "GameplayCueNotify_Static.h"

class AActor;

bool UGameplayCueNotify_Static::WhileActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) const {
    return false;
}

bool UGameplayCueNotify_Static::OnRemove_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) const {
    return false;
}

bool UGameplayCueNotify_Static::OnExecute_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) const {
    return false;
}

bool UGameplayCueNotify_Static::OnActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) const {
    return false;
}


UGameplayCueNotify_Static::UGameplayCueNotify_Static() {
    this->IsOverride = true;
}

