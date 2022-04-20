#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MoviePipelineExecutorJob.generated.h"

class UMoviePipelineExecutorShot;
class UMoviePipelineMasterConfig;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineExecutorJob : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString JobName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Author;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UMoviePipelineExecutorShot*> ShotInfo;
    
    UPROPERTY(BlueprintReadWrite)
    FString UserData;
    
private:
    UPROPERTY(Transient)
    FString StatusMessage;
    
    UPROPERTY(Transient)
    float StatusProgress;
    
    UPROPERTY(Transient)
    bool bIsConsumed;
    
    UPROPERTY(Instanced)
    UMoviePipelineMasterConfig* Configuration;
    
    UPROPERTY()
    TSoftObjectPtr<UMoviePipelineMasterConfig> PresetOrigin;
    
public:
    UMoviePipelineExecutorJob();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusProgress(const float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusMessage(const FString& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetSequence(FSoftObjectPath InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetOrigin(UMoviePipelineMasterConfig* InPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetConsumed(const bool bInConsumed);
    
    UFUNCTION(BlueprintCallable)
    void SetConfiguration(UMoviePipelineMasterConfig* InPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDuplicated();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsConsumed() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetStatusProgress() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString GetStatusMessage() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineMasterConfig* GetPresetOrigin() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineMasterConfig* GetConfiguration() const;
    
};

