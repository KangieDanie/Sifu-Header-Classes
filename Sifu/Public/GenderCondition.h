#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "BaseActorCondition.h"
#include "GenderCondition.generated.h"

UCLASS()
class SIFU_API UGenderCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECharacterGender m_eGender;
    
    UGenderCondition();
};

