#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MoviePipelineExecutorShot.generated.h"

class UMoviePipelineShotConfig;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineExecutorShot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath InnerPathKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath OuterPathKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString OuterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InnerName;
    
protected:
    UPROPERTY(Transient)
    float Progress;
    
    UPROPERTY(Transient)
    FString StatusMessage;
    
private:
    UPROPERTY()
    UMoviePipelineShotConfig* ShotOverrideConfig;
    
    UPROPERTY()
    TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;
    
public:
    UMoviePipelineExecutorShot();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusProgress(const float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusMessage(const FString& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetShotOverridePresetOrigin(UMoviePipelineShotConfig* InPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetShotOverrideConfiguration(UMoviePipelineShotConfig* InPreset);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetStatusProgress() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString GetStatusMessage() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineShotConfig* GetShotOverridePresetOrigin() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineShotConfig* GetShotOverrideConfiguration() const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<UMoviePipelineShotConfig> InConfigType);
    
};

