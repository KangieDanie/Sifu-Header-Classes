#pragma once
#include "CoreMinimal.h"
#include "BaseActorConditionInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SCAnimNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API USCAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBaseActorConditionInstance m_triggerCondition;
    
public:
    USCAnimNotify();
};

