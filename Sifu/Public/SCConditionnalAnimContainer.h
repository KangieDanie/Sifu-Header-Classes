#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "BaseActorConditionInstance.h"
#include "SCConditionnalAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct FSCConditionnalAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimContainer m_animContainer;
    
    UPROPERTY(EditAnywhere)
    TArray<FBaseActorConditionInstance> m_Conditions;
    
    SIFU_API FSCConditionnalAnimContainer();
};

