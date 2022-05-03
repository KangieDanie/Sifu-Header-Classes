#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieSceneSequenceTransform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneSequenceID.h"
#include "MovieSceneFrameRange.h"
#include "MovieSceneSequenceInstanceDataPtr.h"
#include "MovieSceneSubSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSubSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSoftObjectPath Sequence;
    
    UPROPERTY()
    FMovieSceneSequenceTransform RootToSequenceTransform;
    
    UPROPERTY()
    FFrameRate TickResolution;
    
    UPROPERTY()
    FMovieSceneSequenceID DeterministicSequenceID;
    
    UPROPERTY()
    FMovieSceneFrameRange PlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange FullPlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange UnwarpedPlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PreRollRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PostRollRange;
    
    UPROPERTY()
    int16 HierarchicalBias;
    
    UPROPERTY()
    bool bHasHierarchicalEasing;
    
    UPROPERTY()
    FMovieSceneSequenceInstanceDataPtr InstanceData;
    
private:
    UPROPERTY()
    FGuid SubSectionSignature;
    
    UPROPERTY()
    FMovieSceneSequenceTransform OuterToInnerTransform;
    
public:
    MOVIESCENE_API FMovieSceneSubSequenceData();
};

