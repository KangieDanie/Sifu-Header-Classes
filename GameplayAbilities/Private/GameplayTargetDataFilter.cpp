#include "GameplayTargetDataFilter.h"

FGameplayTargetDataFilter::FGameplayTargetDataFilter() {
    this->SelfActor = NULL;
    this->RequiredActorClass = NULL;
    this->SelfFilter = ETargetDataFilterSelf::TDFS_Any;
    this->bReverseFilter = false;
}

