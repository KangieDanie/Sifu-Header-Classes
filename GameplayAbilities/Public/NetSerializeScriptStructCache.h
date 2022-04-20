#pragma once
#include "CoreMinimal.h"
#include "NetSerializeScriptStructCache.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FNetSerializeScriptStructCache {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UScriptStruct*> ScriptStructs;
    
    GAMEPLAYABILITIES_API FNetSerializeScriptStructCache();
};

