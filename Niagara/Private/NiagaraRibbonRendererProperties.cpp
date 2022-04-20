#include "NiagaraRibbonRendererProperties.h"

UNiagaraRibbonRendererProperties::UNiagaraRibbonRendererProperties() {
    this->Material = NULL;
    this->FacingMode = ENiagaraRibbonFacingMode::Screen;
    this->DrawDirection = ENiagaraRibbonDrawDirection::FrontToBack;
    this->CurveTension = 0.00f;
    this->TessellationMode = ENiagaraRibbonTessellationMode::Automatic;
    this->TessellationFactor = 16;
    this->bUseConstantFactor = false;
    this->TessellationAngle = 15.00f;
    this->bScreenSpaceTessellation = true;
}

