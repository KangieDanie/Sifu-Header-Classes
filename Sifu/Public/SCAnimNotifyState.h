#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "BaseActorConditionInstance.h"
#include "SCAnimNotifyState.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API USCAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bRectifiedActivationConditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bDebugLogActivationTime;
    
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_triggerCondition;
    
public:
    USCAnimNotifyState();
};

