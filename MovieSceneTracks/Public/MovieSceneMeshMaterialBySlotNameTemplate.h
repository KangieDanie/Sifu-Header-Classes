#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectPathChannel -FallbackName=MovieSceneObjectPathChannel
#include "MovieSceneMeshMaterialBySlotNameTemplate.generated.h"

USTRUCT()
struct FMovieSceneMeshMaterialBySlotNameTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName SlotName;
    
    UPROPERTY()
    FMovieSceneObjectPathChannel MaterialChannel;
    
public:
    MOVIESCENETRACKS_API FMovieSceneMeshMaterialBySlotNameTemplate();
};

