#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterSectionTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneNiagaraVectorParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel VectorChannels[4];
    
    UPROPERTY()
    int32 ChannelsUsed;
    
public:
    NIAGARA_API FMovieSceneNiagaraVectorParameterSectionTemplate();
};

