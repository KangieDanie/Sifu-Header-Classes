#pragma once
#include "CoreMinimal.h"
#include "EFireEventsAtPosition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneEventTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(EditAnywhere)
    EFireEventsAtPosition EventPosition;
    
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneEventTrack();
    
    // Fix for true pure virtual functions not being implemented
};

