#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneTrack.h"
#include "MovieSceneSpawnTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class MOVIESCENE_API UMovieSceneSpawnTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY()
    FGuid ObjectGuid;
    
public:
    UMovieSceneSpawnTrack();
};

