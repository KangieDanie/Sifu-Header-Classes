#include "RigUnit_SetTranslation.h"

FRigUnit_SetTranslation::FRigUnit_SetTranslation() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

