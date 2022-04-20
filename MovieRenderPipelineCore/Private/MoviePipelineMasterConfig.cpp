#include "MoviePipelineMasterConfig.h"
#include "MoviePipelineOutputSetting.h"

class UMoviePipelineSetting;
class ULevelSequence;

void UMoviePipelineMasterConfig::InitializeTransientSettings() {
}

TArray<UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetTransientSettings() const {
    return TArray<UMoviePipelineSetting*>();
}

FFrameRate UMoviePipelineMasterConfig::GetEffectiveFrameRate(const ULevelSequence* InSequence) const {
    return FFrameRate{};
}

TArray<UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings) const {
    return TArray<UMoviePipelineSetting*>();
}

UMoviePipelineMasterConfig::UMoviePipelineMasterConfig() {
    this->OutputSetting = CreateDefaultSubobject<UMoviePipelineOutputSetting>(TEXT("DefaultOutputSetting"));
}

