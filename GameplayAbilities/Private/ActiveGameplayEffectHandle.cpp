#include "ActiveGameplayEffectHandle.h"

FActiveGameplayEffectHandle::FActiveGameplayEffectHandle() {
    this->Handle = 0;
    this->bPassedFiltersAndWasExecuted = false;
}

