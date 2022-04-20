#include "NiagaraSettings.h"

UNiagaraSettings::UNiagaraSettings() {
    this->QualityLevels.AddDefaulted(5);
    this->DefaultRenderTargetFormat = RTF_RGBA16f;
    this->DefaultGridFormat = ENiagaraGpuBufferFormat::HalfFloat;
    this->DefaultEffectTypePtr = NULL;
}

