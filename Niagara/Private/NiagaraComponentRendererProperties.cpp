#include "NiagaraComponentRendererProperties.h"

UNiagaraComponentRendererProperties::UNiagaraComponentRendererProperties() {
    this->ComponentType = NULL;
    this->ComponentCountLimit = 15;
    this->bAssignComponentsOnParticleID = true;
    this->bOnlyCreateComponentsOnParticleSpawn = true;
    this->TemplateComponent = NULL;
}

