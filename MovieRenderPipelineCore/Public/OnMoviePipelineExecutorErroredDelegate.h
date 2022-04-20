#pragma once
#include "CoreMinimal.h"
#include "OnMoviePipelineExecutorErroredDelegate.generated.h"

class UMoviePipelineExecutorBase;
class UMoviePipeline;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMoviePipelineExecutorErrored, UMoviePipelineExecutorBase*, PipelineExecutor, UMoviePipeline*, PipelineWithError, bool, bIsFatal, FText, ErrorText);

