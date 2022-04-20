#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagsCondition.generated.h"

UCLASS()
class SIFU_API UGameplayTagsCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_RequiredTags;
    
    UGameplayTagsCondition();
};

