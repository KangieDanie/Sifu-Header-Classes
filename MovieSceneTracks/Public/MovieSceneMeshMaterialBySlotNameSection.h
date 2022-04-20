#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectPathChannel -FallbackName=MovieSceneObjectPathChannel
#include "MovieSceneMeshMaterialBySlotNameSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneMeshMaterialBySlotNameSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectPathChannel MaterialChannel;
    
    UMovieSceneMeshMaterialBySlotNameSection();
};

