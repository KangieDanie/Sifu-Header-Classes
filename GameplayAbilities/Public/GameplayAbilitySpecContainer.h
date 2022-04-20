#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecContainer.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilitySpecContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGameplayAbilitySpec> Items;
    
    UPROPERTY(Export)
    UAbilitySystemComponent* Owner;
    
    FGameplayAbilitySpecContainer();
};

