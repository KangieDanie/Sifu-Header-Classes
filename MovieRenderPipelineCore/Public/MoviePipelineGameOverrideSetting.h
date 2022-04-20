#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineSetting.h"
#include "EMoviePipelineTextureStreamingMethod.h"
#include "MoviePipelineGameOverrideSetting.generated.h"

class AGameModeBase;

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AGameModeBase> GameModeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCinematicQualitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMoviePipelineTextureStreamingMethod TextureStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseLODZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableHLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseHighQualityShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ShadowDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowRadiusThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideViewDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ViewDistanceScale;
    
    UMoviePipelineGameOverrideSetting();
};

