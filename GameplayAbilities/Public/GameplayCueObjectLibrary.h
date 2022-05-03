#pragma once
#include "CoreMinimal.h"
#include "GameplayCueObjectLibrary.generated.h"

class UObjectLibrary;
class UGameplayCueSet;

USTRUCT(BlueprintType)
struct FGameplayCueObjectLibrary {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> Paths;
    
    UPROPERTY()
    UObjectLibrary* ActorObjectLibrary;
    
    UPROPERTY()
    UObjectLibrary* StaticObjectLibrary;
    
    UPROPERTY()
    UGameplayCueSet* CueSet;
    
    UPROPERTY()
    bool bShouldSyncScan;
    
    UPROPERTY()
    bool bShouldAsyncLoad;
    
    UPROPERTY()
    bool bShouldSyncLoad;
    
    UPROPERTY()
    bool bHasBeenInitialized;
    
    GAMEPLAYABILITIES_API FGameplayCueObjectLibrary();
};

