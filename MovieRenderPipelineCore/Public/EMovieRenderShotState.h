#pragma once
#include "CoreMinimal.h"
#include "EMovieRenderShotState.generated.h"

UENUM()
enum class EMovieRenderShotState : uint8 {
    Uninitialized,
    WarmingUp,
    MotionBlur,
    Rendering,
    Finished,
};

