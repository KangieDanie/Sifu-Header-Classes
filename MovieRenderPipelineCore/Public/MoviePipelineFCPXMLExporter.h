#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineOutputBase.h"
#include "FCPXMLExportDataSource.h"
#include "MoviePipelineFCPXMLExporter.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FileNameFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCPXMLExportDataSource DataSource;
    
    UMoviePipelineFCPXMLExporter();
};

