#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneRootEvaluationTemplateInstance.generated.h"

class UMovieSceneSequence;
class UMovieSceneCompiledDataManager;
class UMovieSceneEntitySystemLinker;
class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneRootEvaluationTemplateInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence;
    
    UPROPERTY()
    UMovieSceneCompiledDataManager* CompiledDataManager;
    
    UPROPERTY()
    UMovieSceneEntitySystemLinker* EntitySystemLinker;
    
    UPROPERTY()
    TMap<FMovieSceneSequenceID, UObject*> DirectorInstances;
    
public:
    MOVIESCENE_API FMovieSceneRootEvaluationTemplateInstance();
};

