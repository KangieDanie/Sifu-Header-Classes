#include "MovieSceneCapture.h"
#include "Templates/SubclassOf.h"

class UMovieSceneCaptureProtocolBase;

void UMovieSceneCapture::SetImageCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType) {
}

void UMovieSceneCapture::SetAudioCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType) {
}

UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol() {
    return NULL;
}

UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol() {
    return NULL;
}

UMovieSceneCapture::UMovieSceneCapture() {
    this->ImageCaptureProtocol = NULL;
    this->AudioCaptureProtocol = NULL;
    this->bUseSeparateProcess = false;
    this->bCloseEditorWhenCaptureStarts = false;
    this->AdditionalCommandLineArguments = TEXT("-NOSCREENMESSAGES");
    this->InheritedCommandLineArguments = TEXT("-AUTH_LOGIN=unused -AUTH_PASSWORD=0c8814fca1c71b3738a02b639f3b2509 -AUTH_TYPE=exchangecode -epicapp=d36336f190094951873ed6138ac208d8 -epicenv=Prod -EpicPortal -epicusername=CODEX -epicuserid=1638 -epiclocale=en ");
}

