#include "ActiveGameplayEffect.h"

FActiveGameplayEffect::FActiveGameplayEffect() {
    this->StartServerWorldTime = 0.00f;
    this->CachedStartServerWorldTime = 0.00f;
    this->StartWorldTime = 0.00f;
    this->bIsInhibited = false;
}

