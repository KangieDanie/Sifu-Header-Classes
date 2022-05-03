#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineFinishedDelegate.h"
#include "MoviePipeline.generated.h"

class UTexture;
class UEngineCustomTimeStep;
class UMoviePipelineCustomTimeStep;
class UMovieRenderDebugWidget;
class ULevelSequence;
class ALevelSequenceActor;
class UMoviePipelineExecutorJob;
class UMoviePipelineMasterConfig;

UCLASS(BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipeline : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMoviePipelineFinished OnMoviePipelineFinishedDelegate;
    
private:
    UPROPERTY(Instanced, Transient)
    UMoviePipelineCustomTimeStep* CustomTimeStep;
    
    UPROPERTY(Transient)
    UEngineCustomTimeStep* CachedPrevCustomTimeStep;
    
    UPROPERTY(Transient)
    ULevelSequence* TargetSequence;
    
    UPROPERTY(Transient)
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(Export, Transient)
    UMovieRenderDebugWidget* DebugWidget;
    
    UPROPERTY(Transient)
    UTexture* PreviewTexture;
    
public:
    UPROPERTY(Transient)
    TSubclassOf<UMovieRenderDebugWidget> DebugWidgetClass;
    
private:
    UPROPERTY(Transient)
    UMoviePipelineExecutorJob* CurrentJob;
    
public:
    UMoviePipeline();
    UFUNCTION(BlueprintCallable)
    void Shutdown(bool bError);
    
    UFUNCTION(BlueprintCallable)
    void RequestShutdown(bool bIsError);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoviePipelineFinishedImpl();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsShutdownRequested() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintPure)
    UTexture* GetPreviewTexture() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineMasterConfig* GetPipelineMasterConfig() const;
    
};

