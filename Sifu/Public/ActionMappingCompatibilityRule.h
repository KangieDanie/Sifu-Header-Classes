#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "EInputMappingCompatibilityRuleType.h"
#include "ActionMappingCompatibilityRule.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FActionMappingCompatibilityRule {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EInputMappingCompatibilityRuleType m_eRule;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<InputAction> m_Actions;
    
    FActionMappingCompatibilityRule();
};

