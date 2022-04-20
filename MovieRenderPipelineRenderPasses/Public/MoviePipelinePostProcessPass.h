#pragma once
#include "CoreMinimal.h"
#include "MoviePipelinePostProcessPass.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINERENDERPASSES_API FMoviePipelinePostProcessPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> Material;
    
    FMoviePipelinePostProcessPass();
};

