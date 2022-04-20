#include "MoviePipelineQueue.h"
#include "Templates/SubclassOf.h"

class UMoviePipelineExecutorJob;
class UMoviePipelineQueue;

TArray<UMoviePipelineExecutorJob*> UMoviePipelineQueue::GetJobs() const {
    return TArray<UMoviePipelineExecutorJob*>();
}

UMoviePipelineExecutorJob* UMoviePipelineQueue::DuplicateJob(UMoviePipelineExecutorJob* InJob) {
    return NULL;
}

void UMoviePipelineQueue::DeleteJob(UMoviePipelineExecutorJob* InJob) {
}

void UMoviePipelineQueue::CopyFrom(UMoviePipelineQueue* InQueue) {
}

UMoviePipelineExecutorJob* UMoviePipelineQueue::AllocateNewJob(TSubclassOf<UMoviePipelineExecutorJob> InJobType) {
    return NULL;
}

UMoviePipelineQueue::UMoviePipelineQueue() {
}

