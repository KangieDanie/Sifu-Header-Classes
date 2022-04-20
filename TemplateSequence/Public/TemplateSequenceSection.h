#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubSection -FallbackName=MovieSceneSubSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "TemplateSequenceSection.generated.h"

UCLASS(MinimalAPI)
class UTemplateSequenceSection : public UMovieSceneSubSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UTemplateSequenceSection();
    
    // Fix for true pure virtual functions not being implemented
};

