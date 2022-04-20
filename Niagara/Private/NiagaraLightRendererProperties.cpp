#include "NiagaraLightRendererProperties.h"

UNiagaraLightRendererProperties::UNiagaraLightRendererProperties() {
    this->bUseInverseSquaredFalloff = true;
    this->bAffectsTranslucency = false;
    this->RadiusScale = 1.00f;
}

