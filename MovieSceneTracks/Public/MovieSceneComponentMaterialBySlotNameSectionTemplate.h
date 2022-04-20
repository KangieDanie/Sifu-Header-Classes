#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParameterSectionTemplate.h"
#include "MovieSceneComponentMaterialBySlotNameSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneComponentMaterialBySlotNameSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName SlotName;
    
public:
    MOVIESCENETRACKS_API FMovieSceneComponentMaterialBySlotNameSectionTemplate();
};

