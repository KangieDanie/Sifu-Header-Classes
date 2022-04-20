#include "ControlRigControlActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

void AControlRigControlActor::Refresh() {
}

void AControlRigControlActor::Clear() {
}

AControlRigControlActor::AControlRigControlActor() {
    this->ActorToTrack = NULL;
    this->ControlRigClass = NULL;
    this->bRefreshOnTick = true;
    this->bIsSelectable = true;
    this->MaterialOverride = NULL;
    this->ColorParameter = TEXT("Color");
    this->bCastShadows = false;
    this->ActorRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->ControlRig = NULL;
}

