#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneNiagaraParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FNiagaraVariable Parameter;
    
public:
    NIAGARA_API FMovieSceneNiagaraParameterSectionTemplate();
};

