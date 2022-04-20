#pragma once
#include "CoreMinimal.h"
#include "EMovieRenderPipelineState.generated.h"

UENUM()
enum class EMovieRenderPipelineState : uint8 {
    Uninitialized,
    ProducingFrames,
    Finalize,
    Export,
    Finished,
};

