#include "AkAudioBank.h"

UAkAudioBank::UAkAudioBank() {
    this->AutoLoad = true;
    this->bIsLocalized = false;
    this->CurrentLocalizedPlatformAssetData = NULL;
}

