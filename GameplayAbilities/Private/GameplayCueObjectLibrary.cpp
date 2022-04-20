#include "GameplayCueObjectLibrary.h"

FGameplayCueObjectLibrary::FGameplayCueObjectLibrary() {
    this->ActorObjectLibrary = NULL;
    this->StaticObjectLibrary = NULL;
    this->CueSet = NULL;
    this->bShouldSyncScan = false;
    this->bShouldAsyncLoad = false;
    this->bShouldSyncLoad = false;
    this->bHasBeenInitialized = false;
}

