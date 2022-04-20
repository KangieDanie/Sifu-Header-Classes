#include "MoviePipelineExecutorShot.h"
#include "Templates/SubclassOf.h"

class UMoviePipelineShotConfig;

void UMoviePipelineExecutorShot::SetStatusProgress_Implementation(const float InProgress) {
}

void UMoviePipelineExecutorShot::SetStatusMessage_Implementation(const FString& InStatus) {
}

void UMoviePipelineExecutorShot::SetShotOverridePresetOrigin(UMoviePipelineShotConfig* InPreset) {
}

void UMoviePipelineExecutorShot::SetShotOverrideConfiguration(UMoviePipelineShotConfig* InPreset) {
}

float UMoviePipelineExecutorShot::GetStatusProgress_Implementation() const {
    return 0.0f;
}

FString UMoviePipelineExecutorShot::GetStatusMessage_Implementation() const {
    return TEXT("");
}

UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverridePresetOrigin() const {
    return NULL;
}

UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverrideConfiguration() const {
    return NULL;
}

UMoviePipelineShotConfig* UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig(TSubclassOf<UMoviePipelineShotConfig> InConfigType) {
    return NULL;
}

UMoviePipelineExecutorShot::UMoviePipelineExecutorShot() {
    this->bEnabled = true;
    this->Progress = 0.00f;
    this->ShotOverrideConfig = NULL;
}

