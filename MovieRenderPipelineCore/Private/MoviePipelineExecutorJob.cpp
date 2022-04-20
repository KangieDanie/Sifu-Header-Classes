#include "MoviePipelineExecutorJob.h"
#include "MoviePipelineMasterConfig.h"

void UMoviePipelineExecutorJob::SetStatusProgress_Implementation(const float InProgress) {
}

void UMoviePipelineExecutorJob::SetStatusMessage_Implementation(const FString& InStatus) {
}

void UMoviePipelineExecutorJob::SetSequence(FSoftObjectPath InSequence) {
}

void UMoviePipelineExecutorJob::SetPresetOrigin(UMoviePipelineMasterConfig* InPreset) {
}

void UMoviePipelineExecutorJob::SetConsumed_Implementation(const bool bInConsumed) {
}

void UMoviePipelineExecutorJob::SetConfiguration(UMoviePipelineMasterConfig* InPreset) {
}

void UMoviePipelineExecutorJob::OnDuplicated_Implementation() {
}

bool UMoviePipelineExecutorJob::IsConsumed_Implementation() const {
    return false;
}

float UMoviePipelineExecutorJob::GetStatusProgress_Implementation() const {
    return 0.0f;
}

FString UMoviePipelineExecutorJob::GetStatusMessage_Implementation() const {
    return TEXT("");
}

UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetPresetOrigin() const {
    return NULL;
}

UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetConfiguration() const {
    return NULL;
}

UMoviePipelineExecutorJob::UMoviePipelineExecutorJob() {
    this->StatusProgress = 0.00f;
    this->bIsConsumed = false;
    this->Configuration = CreateDefaultSubobject<UMoviePipelineMasterConfig>(TEXT("DefaultConfig"));
}

