#include "NiagaraMeshRendererProperties.h"

UNiagaraMeshRendererProperties::UNiagaraMeshRendererProperties() {
    this->ParticleMesh = NULL;
    this->SortMode = ENiagaraSortMode::None;
    this->bOverrideMaterials = false;
    this->bSortOnlyWhenTranslucent = true;
    this->bSubImageBlend = false;
    this->FacingMode = ENiagaraMeshFacingMode::Default;
    this->bLockedAxisEnable = false;
    this->LockedAxisSpace = ENiagaraMeshLockedAxisSpace::Simulation;
    this->PivotOffsetSpace = ENiagaraMeshPivotOffsetSpace::Mesh;
    this->bEnableFrustumCulling = false;
    this->bEnableCameraDistanceCulling = false;
    this->MinCameraDistance = 0.00f;
    this->MaxCameraDistance = 1000.00f;
    this->RendererVisibility = 0;
}

