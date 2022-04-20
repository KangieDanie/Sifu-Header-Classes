#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAdditiveCameraAnimationTemplate.h"
#include "MovieSceneCameraAnimSectionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneCameraAnimSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneCameraAnimSectionData SourceData;
    
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
public:
    MOVIESCENETRACKS_API FMovieSceneCameraAnimSectionTemplate();
};

