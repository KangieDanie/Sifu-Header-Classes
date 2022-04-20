#include "RigUnit_BoneHarmonics.h"

FRigUnit_BoneHarmonics::FRigUnit_BoneHarmonics() {
    this->WaveEase = EControlRigAnimEasingType::Linear;
    this->WaveMinimum = 0.00f;
    this->WaveMaximum = 0.00f;
    this->RotationOrder = EControlRigRotationOrder::XYZ;
    this->bPropagateToChildren = false;
}

