#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineQueue.generated.h"

class UMoviePipelineExecutorJob;
class UMoviePipelineQueue;

UCLASS(BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipelineQueue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UMoviePipelineExecutorJob*> Jobs;
    
public:
    UMoviePipelineQueue();
    UFUNCTION(BlueprintPure)
    TArray<UMoviePipelineExecutorJob*> GetJobs() const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorJob* DuplicateJob(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable)
    void DeleteJob(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable)
    void CopyFrom(UMoviePipelineQueue* InQueue);
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<UMoviePipelineExecutorJob> InJobType);
    
};

