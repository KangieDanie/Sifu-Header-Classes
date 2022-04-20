#include "MoviePipelineBlueprintLibrary.h"

class ULevelSequence;
class UMoviePipelineExecutorJob;
class UMoviePipeline;
class UObject;
class UMovieSceneSequence;

void UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(ULevelSequence* InSequence, UMoviePipelineExecutorJob* InJob) {
}

int32 UMoviePipelineBlueprintLibrary::ResolveVersionNumber(const UMoviePipeline* InMoviePipeline) {
    return 0;
}

EMovieRenderPipelineState UMoviePipelineBlueprintLibrary::GetPipelineState(const UMoviePipeline* InPipeline) {
    return EMovieRenderPipelineState::Uninitialized;
}

void UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount) {
}

void UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount) {
}

FTimecode UMoviePipelineBlueprintLibrary::GetMasterTimecode(const UMoviePipeline* InMoviePipeline) {
    return FTimecode{};
}

FFrameNumber UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(const UMoviePipeline* InMoviePipeline) {
    return FFrameNumber{};
}

FString UMoviePipelineBlueprintLibrary::GetMapPackageName(UMoviePipelineExecutorJob* InJob) {
    return TEXT("");
}

FText UMoviePipelineBlueprintLibrary::GetJobName(UMoviePipeline* InMoviePipeline) {
    return FText::GetEmpty();
}

FDateTime UMoviePipelineBlueprintLibrary::GetJobInitializationTime(const UMoviePipeline* InMoviePipeline) {
    return FDateTime{};
}

FText UMoviePipelineBlueprintLibrary::GetJobAuthor(UMoviePipeline* InMoviePipeline) {
    return FText::GetEmpty();
}

bool UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(const UMoviePipeline* InPipeline, FTimespan& OutEstimate) {
    return false;
}

FTimecode UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(const UMoviePipeline* InMoviePipeline) {
    return FTimecode{};
}

FFrameNumber UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(const UMoviePipeline* InMoviePipeline) {
    return FFrameNumber{};
}

FMoviePipelineSegmentWorkMetrics UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(const UMoviePipeline* InMoviePipeline) {
    return FMoviePipelineSegmentWorkMetrics{};
}

EMovieRenderShotState UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(UMoviePipeline* InMoviePipeline) {
    return EMovieRenderShotState::Uninitialized;
}

void UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName) {
}

float UMoviePipelineBlueprintLibrary::GetCompletionPercentage(const UMoviePipeline* InPipeline) {
    return 0.0f;
}

UMovieSceneSequence* UMoviePipelineBlueprintLibrary::DuplicateSequence(UObject* Outer, UMovieSceneSequence* InSequence) {
    return NULL;
}

UMoviePipelineBlueprintLibrary::UMoviePipelineBlueprintLibrary() {
}

