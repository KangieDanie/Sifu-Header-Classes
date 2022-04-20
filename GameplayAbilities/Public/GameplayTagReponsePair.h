#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagReponsePair.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FGameplayTagReponsePair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY()
    TSubclassOf<UGameplayEffect> ResponseGameplayEffect;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> ResponseGameplayEffects;
    
    UPROPERTY(EditAnywhere)
    int32 SoftCountCap;
    
    GAMEPLAYABILITIES_API FGameplayTagReponsePair();
};

