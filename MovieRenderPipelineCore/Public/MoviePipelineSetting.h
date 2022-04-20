#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineSetting.generated.h"

class UMoviePipeline;

UCLASS(Abstract, BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipelineSetting : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UMoviePipeline> CachedPipeline;
    
    UPROPERTY()
    bool bEnabled;
    
public:
    UMoviePipelineSetting();
    UFUNCTION(BlueprintPure)
    void BuildNewProcessCommandLine(UPARAM(Ref) FString& InOutUnrealURLParams, UPARAM(Ref) FString& InOutCommandLineArgs) const;
    
};

