#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineExecutorBase.h"
#include "MoviePipelinePythonHostExecutor.generated.h"

class UMoviePipelinePythonHostExecutor;
class UMoviePipelineQueue;
class UWorld;

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UMoviePipelinePythonHostExecutor> ExecutorClass;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMoviePipelineQueue* PipelineQueue;
    
private:
    UPROPERTY(Transient)
    UWorld* LastLoadedWorld;
    
public:
    UMoviePipelinePythonHostExecutor();
    UFUNCTION(BlueprintNativeEvent)
    void OnMapLoad(UWorld* InWorld);
    
    UFUNCTION(BlueprintPure)
    UWorld* GetLastLoadedWorld() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void ExecuteDelayed(UMoviePipelineQueue* InPipelineQueue);
    
};

