#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMovieRenderPipelineState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MoviePipelineSegmentWorkMetrics.h"
#include "EMovieRenderShotState.h"
#include "MoviePipelineBlueprintLibrary.generated.h"

class ULevelSequence;
class UMoviePipelineExecutorJob;
class UMoviePipeline;
class UMovieSceneSequence;
class UObject;

UCLASS(BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMoviePipelineBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateJobShotListFromSequence(ULevelSequence* InSequence, UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable)
    static int32 ResolveVersionNumber(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static EMovieRenderPipelineState GetPipelineState(const UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintPure)
    static void GetOverallSegmentCounts(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    
    UFUNCTION(BlueprintPure)
    static void GetOverallOutputFrames(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    
    UFUNCTION(BlueprintPure)
    static FTimecode GetMasterTimecode(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static FFrameNumber GetMasterFrameNumber(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static FString GetMapPackageName(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintPure)
    static FText GetJobName(UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static FDateTime GetJobInitializationTime(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static FText GetJobAuthor(UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static bool GetEstimatedTimeRemaining(const UMoviePipeline* InPipeline, FTimespan& OutEstimate);
    
    UFUNCTION(BlueprintPure)
    static FTimecode GetCurrentShotTimecode(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static FFrameNumber GetCurrentShotFrameNumber(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static EMovieRenderShotState GetCurrentSegmentState(UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintPure)
    static void GetCurrentSegmentName(UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);
    
    UFUNCTION(BlueprintPure)
    static float GetCompletionPercentage(const UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneSequence* DuplicateSequence(UObject* Outer, UMovieSceneSequence* InSequence);
    
};

