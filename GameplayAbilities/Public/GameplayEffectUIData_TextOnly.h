#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectUIData.h"
#include "GameplayEffectUIData_TextOnly.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class GAMEPLAYABILITIES_API UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UGameplayEffectUIData_TextOnly();
};

