#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneFloatChannelSerializationHelper.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "MovieSceneAkAudioRTPCSection.generated.h"

class UAkRtpc;

UCLASS()
class AKAUDIO_API UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAkRtpc* RTPC;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString Name;
    
    UPROPERTY()
    FRichCurve FloatCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;
    
    UPROPERTY()
    FMovieSceneFloatChannel RTPCChannel;
    
public:
    UMovieSceneAkAudioRTPCSection();
};

