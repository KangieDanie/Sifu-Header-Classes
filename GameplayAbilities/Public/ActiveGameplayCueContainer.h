#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "ActiveGameplayCue.h"
#include "ActiveGameplayCueContainer.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FActiveGameplayCueContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FActiveGameplayCue> GameplayCues;
    
private:
    UPROPERTY(Export)
    UAbilitySystemComponent* Owner;
    
public:
    FActiveGameplayCueContainer();
};

