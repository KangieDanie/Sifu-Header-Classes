#include "SoundTransitionVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ASoundTransitionVolume::ASoundTransitionVolume() {
    this->m_SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
}

