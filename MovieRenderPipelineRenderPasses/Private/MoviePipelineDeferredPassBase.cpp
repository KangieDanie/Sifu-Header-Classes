#include "MoviePipelineDeferredPassBase.h"

UMoviePipelineDeferredPassBase::UMoviePipelineDeferredPassBase() {
    this->bAccumulatorIncludesAlpha = false;
    this->bDisableMultisampleEffects = false;
    this->AdditionalPostProcessMaterials.AddDefaulted(2);
    this->bAddDefaultLayer = false;
    this->StencilLayerMaterial = NULL;
}

