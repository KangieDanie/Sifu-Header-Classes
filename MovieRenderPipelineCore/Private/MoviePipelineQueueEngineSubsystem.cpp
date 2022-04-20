#include "MoviePipelineQueueEngineSubsystem.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineQueue.h"

class UMoviePipelineExecutorBase;

void UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor) {
}

UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor(TSubclassOf<UMoviePipelineExecutorBase> InExecutorType) {
    return NULL;
}

bool UMoviePipelineQueueEngineSubsystem::IsRendering() const {
    return false;
}

UMoviePipelineQueue* UMoviePipelineQueueEngineSubsystem::GetQueue() const {
    return NULL;
}

UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::GetActiveExecutor() const {
    return NULL;
}

UMoviePipelineQueueEngineSubsystem::UMoviePipelineQueueEngineSubsystem() {
    this->ActiveExecutor = NULL;
    this->CurrentQueue = CreateDefaultSubobject<UMoviePipelineQueue>(TEXT("EngineMoviePipelineQueue"));
}

