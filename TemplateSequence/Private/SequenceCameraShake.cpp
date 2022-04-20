#include "SequenceCameraShake.h"
#include "SequenceCameraShakeSequencePlayer.h"
#include "SequenceCameraShakeCameraStandIn.h"

USequenceCameraShake::USequenceCameraShake() {
    this->Sequence = NULL;
    this->PlayRate = 1.00f;
    this->Scale = 1.00f;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.40f;
    this->RandomSegmentDuration = 0.00f;
    this->bRandomSegment = false;
    this->Player = CreateDefaultSubobject<USequenceCameraShakeSequencePlayer>(TEXT("SequenceCameraShake_Player"));
    this->CameraStandIn = CreateDefaultSubobject<USequenceCameraShakeCameraStandIn>(TEXT("SequenceCameraShake_CameraStandIn"));
}

