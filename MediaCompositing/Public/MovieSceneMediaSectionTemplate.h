#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneMediaSectionParams.h"
#include "MovieSceneMediaSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneMediaSectionParams Params;
    
public:
    MEDIACOMPOSITING_API FMovieSceneMediaSectionTemplate();
};

