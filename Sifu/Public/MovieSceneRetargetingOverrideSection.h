#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneRetargetingOverrideSection.generated.h"

class UWGRetargetingOverrideData;

UCLASS(MinimalAPI)
class UMovieSceneRetargetingOverrideSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWGRetargetingOverrideData* m_RetargetingOverrideData;
    
    UMovieSceneRetargetingOverrideSection();
};

