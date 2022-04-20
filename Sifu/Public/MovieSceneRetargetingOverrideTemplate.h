#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneRetargetingOverrideTemplate.generated.h"

class UMovieSceneRetargetingOverrideSection;

USTRUCT()
struct FMovieSceneRetargetingOverrideTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UMovieSceneRetargetingOverrideSection* Section;
    
public:
    SIFU_API FMovieSceneRetargetingOverrideTemplate();
};

