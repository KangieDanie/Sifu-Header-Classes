#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneSpawnable.h"
#include "MovieSceneMarkedFrame.h"
#include "EMovieSceneEvaluationType.h"
#include "MovieScenePossessable.h"
#include "MovieSceneBinding.h"
#include "MovieSceneObjectBindingIDs.h"
#include "MovieSceneFrameRange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "EUpdateClockSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieScene.generated.h"

class UMovieSceneTrack;

UCLASS(DefaultToInstanced)
class MOVIESCENE_API UMovieScene : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FMovieSceneSpawnable> Spawnables;
    
    UPROPERTY()
    TArray<FMovieScenePossessable> Possessables;
    
    UPROPERTY()
    TArray<FMovieSceneBinding> ObjectBindings;
    
    UPROPERTY()
    TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups;
    
    UPROPERTY(Export)
    TArray<UMovieSceneTrack*> MasterTracks;
    
    UPROPERTY(Instanced)
    UMovieSceneTrack* CameraCutTrack;
    
    UPROPERTY()
    FMovieSceneFrameRange SelectionRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PlaybackRange;
    
    UPROPERTY()
    FFrameRate TickResolution;
    
    UPROPERTY()
    FFrameRate DisplayRate;
    
    UPROPERTY()
    EMovieSceneEvaluationType EvaluationType;
    
    UPROPERTY()
    EUpdateClockSource ClockSource;
    
    UPROPERTY()
    FSoftObjectPath CustomClockSourcePath;
    
    UPROPERTY()
    TArray<FMovieSceneMarkedFrame> MarkedFrames;
    
public:
    UMovieScene();
};

