#include "GameplayCuePendingExecute.h"

FGameplayCuePendingExecute::FGameplayCuePendingExecute() {
    this->PayloadType = EGameplayCuePayloadType::CueParameters;
    this->OwningComponent = NULL;
}

