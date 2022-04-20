#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
#include "SCLevelSequenceActor.generated.h"

UCLASS()
class SIFU_API ASCLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    ASCLevelSequenceActor();
    UFUNCTION(BlueprintCallable)
    void BPF_Play();
    
};

