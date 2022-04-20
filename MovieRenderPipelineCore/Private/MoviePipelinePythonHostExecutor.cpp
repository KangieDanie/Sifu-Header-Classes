#include "MoviePipelinePythonHostExecutor.h"

class UWorld;
class UMoviePipelineQueue;

void UMoviePipelinePythonHostExecutor::OnMapLoad_Implementation(UWorld* InWorld) {
}

UWorld* UMoviePipelinePythonHostExecutor::GetLastLoadedWorld() const {
    return NULL;
}

void UMoviePipelinePythonHostExecutor::ExecuteDelayed_Implementation(UMoviePipelineQueue* InPipelineQueue) {
}

UMoviePipelinePythonHostExecutor::UMoviePipelinePythonHostExecutor() {
    this->ExecutorClass = NULL;
    this->PipelineQueue = NULL;
    this->LastLoadedWorld = NULL;
}

