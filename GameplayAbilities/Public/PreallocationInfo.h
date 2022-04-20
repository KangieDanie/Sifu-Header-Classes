#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PreallocationInfo.generated.h"

class AGameplayCueNotify_Actor;

USTRUCT(BlueprintType)
struct FPreallocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<TSubclassOf<AGameplayCueNotify_Actor>> ClassesNeedingPreallocation;
    
    GAMEPLAYABILITIES_API FPreallocationInfo();
};

