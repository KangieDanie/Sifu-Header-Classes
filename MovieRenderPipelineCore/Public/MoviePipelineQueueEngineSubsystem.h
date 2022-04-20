#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "MoviePipelineQueueEngineSubsystem.generated.h"

class UMoviePipelineExecutorBase;
class UMoviePipelineQueue;

UCLASS(BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UMoviePipelineExecutorBase* ActiveExecutor;
    
    UPROPERTY(Instanced, Transient)
    UMoviePipelineQueue* CurrentQueue;
    
public:
    UMoviePipelineQueueEngineSubsystem();
    UFUNCTION(BlueprintCallable)
    void RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor);
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<UMoviePipelineExecutorBase> InExecutorType);
    
    UFUNCTION(BlueprintPure)
    bool IsRendering() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineQueue* GetQueue() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineExecutorBase* GetActiveExecutor() const;
    
};

