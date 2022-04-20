#pragma once
#include "CoreMinimal.h"
#include "EControlRigDrawSettings.generated.h"

UENUM()
namespace EControlRigDrawSettings {
    enum Type {
        Points,
        Lines,
        LineStrip,
        DynamicMesh,
    };
}

