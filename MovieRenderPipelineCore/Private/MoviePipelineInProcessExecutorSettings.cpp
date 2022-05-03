#include "MoviePipelineInProcessExecutorSettings.h"

UMoviePipelineInProcessExecutorSettings::UMoviePipelineInProcessExecutorSettings() {
    this->bCloseEditor = false;
    this->AdditionalCommandLineArguments = TEXT("-NoLoadingScreen -FixedSeed -log -Unattended");
    this->InheritedCommandLineArguments = TEXT("-AUTH_LOGIN=unused -AUTH_PASSWORD=b3e73419aa9844b48bfc488e12607187 -AUTH_TYPE=exchangecode -epicapp=d36336f190094951873ed6138ac208d8 -epicenv=Prod -EpicPortal -epicusername=bondDIVAKAMIKAZE -epicuserid=4e82986d6d484902a96c462c3084c84c -epiclocale=en -epicsandboxid=b7b42e2078524ab386a8b2a9856ef557 ");
    this->InitialDelayFrameCount = 0;
}

