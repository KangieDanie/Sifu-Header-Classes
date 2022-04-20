#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineOutputBase -FallbackName=MoviePipelineOutputBase
#include "MoviePipelineImageSequenceOutputBase.generated.h"

UCLASS(Abstract)
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase {
    GENERATED_BODY()
public:
    UMoviePipelineImageSequenceOutputBase();
};

