#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineHighResSetting.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineHighResSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TileCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TextureSharpnessBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverlapRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideSubSurfaceScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BurleySampleCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bWriteAllSamples;
    
    UMoviePipelineHighResSetting();
};

