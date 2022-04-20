#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineImageSequenceOutputBase.h"
#include "EEXRCompressionFormat.h"
#include "MoviePipelineImageSequenceOutput_EXR.generated.h"

UCLASS()
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEXRCompressionFormat Compression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMultilayer;
    
    UMoviePipelineImageSequenceOutput_EXR();
};

