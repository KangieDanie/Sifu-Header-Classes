#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayEffectUIData.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GAMEPLAYABILITIES_API UGameplayEffectUIData : public UObject {
    GENERATED_BODY()
public:
    UGameplayEffectUIData();
};

