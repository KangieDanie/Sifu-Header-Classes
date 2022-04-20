#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneMeshMaterialBySlotNameTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneMeshMaterialBySlotNameTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SlotName;
    
    UMovieSceneMeshMaterialBySlotNameTrack();
    
    // Fix for true pure virtual functions not being implemented
};

