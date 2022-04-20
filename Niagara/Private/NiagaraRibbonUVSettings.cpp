#include "NiagaraRibbonUVSettings.h"

FNiagaraRibbonUVSettings::FNiagaraRibbonUVSettings() {
    this->LeadingEdgeMode = ENiagaraRibbonUVEdgeMode::SmoothTransition;
    this->TrailingEdgeMode = ENiagaraRibbonUVEdgeMode::SmoothTransition;
    this->DistributionMode = ENiagaraRibbonUVDistributionMode::ScaledUniformly;
    this->TilingLength = 0.00f;
    this->bEnablePerParticleUOverride = false;
    this->bEnablePerParticleVRangeOverride = false;
}

