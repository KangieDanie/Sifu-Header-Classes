#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneSequenceTickManager.generated.h"

class AActor;
class UMovieSceneEntitySystemLinker;

UCLASS()
class MOVIESCENE_API UMovieSceneSequenceTickManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<AActor*> SequenceActors;
    
private:
    UPROPERTY(Transient)
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UMovieSceneSequenceTickManager();
};

