#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIConditionClassInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAiActionClassInstance -FallbackName=SCAiActionClassInstance
#include "AIConditionedAction.generated.h"

class UComboTransitionCondition;
class USCAiAction;

USTRUCT(BlueprintType)
struct SIFU_API FAIConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UComboTransitionCondition*> m_Conditions;
    
    UPROPERTY()
    TSubclassOf<USCAiAction> m_ActionClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIConditionClassInstance> m_ConditionsArray;
    
    UPROPERTY(EditAnywhere)
    FSCAiActionClassInstance m_Action;
    
    FAIConditionedAction();
};

