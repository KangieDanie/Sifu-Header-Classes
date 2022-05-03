#pragma once
#include "CoreMinimal.h"
#include "MovieSceneMaterialTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneComponentMaterialBySlotNameTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneComponentMaterialBySlotNameTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName SlotName;
    
public:
    UMovieSceneComponentMaterialBySlotNameTrack();
    
    // Fix for true pure virtual functions not being implemented
};

