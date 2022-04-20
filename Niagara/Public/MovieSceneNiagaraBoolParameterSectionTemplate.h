#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolChannel -FallbackName=MovieSceneBoolChannel
#include "MovieSceneNiagaraParameterSectionTemplate.h"
#include "MovieSceneNiagaraBoolParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneBoolChannel BoolChannel;
    
public:
    NIAGARA_API FMovieSceneNiagaraBoolParameterSectionTemplate();
};

