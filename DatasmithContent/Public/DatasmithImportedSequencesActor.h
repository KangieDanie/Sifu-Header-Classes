#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DatasmithImportedSequencesActor.generated.h"

class ULevelSequence;

UCLASS()
class DATASMITHCONTENT_API ADatasmithImportedSequencesActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> ImportedSequences;
    
    ADatasmithImportedSequencesActor();
    UFUNCTION(BlueprintCallable)
    void PlayLevelSequence(ULevelSequence* SequenceToPlay);
    
};

