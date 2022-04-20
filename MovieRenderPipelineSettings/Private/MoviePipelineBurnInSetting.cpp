#include "MoviePipelineBurnInSetting.h"

UMoviePipelineBurnInSetting::UMoviePipelineBurnInSetting() {
    this->bCompositeOntoFinalImage = true;
    this->RenderTarget = NULL;
    this->BurnInWidgetInstance = NULL;
}

