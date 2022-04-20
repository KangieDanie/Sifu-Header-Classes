#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SetByCallerFloat.generated.h"

USTRUCT(BlueprintType)
struct FSetByCallerFloat {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FName DataName;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag DataTag;
    
    GAMEPLAYABILITIES_API FSetByCallerFloat();
};

