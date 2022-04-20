#include "MoviePipelineInProcessExecutorSettings.h"

UMoviePipelineInProcessExecutorSettings::UMoviePipelineInProcessExecutorSettings() {
    this->bCloseEditor = false;
    this->AdditionalCommandLineArguments = TEXT("-NoLoadingScreen -FixedSeed -log -Unattended");
    this->InheritedCommandLineArguments = TEXT("-AUTH_LOGIN=unused -AUTH_PASSWORD=0c8814fca1c71b3738a02b639f3b2509 -AUTH_TYPE=exchangecode -epicapp=d36336f190094951873ed6138ac208d8 -epicenv=Prod -EpicPortal -epicusername=CODEX -epicuserid=1638 -epiclocale=en ");
    this->InitialDelayFrameCount = 0;
}

