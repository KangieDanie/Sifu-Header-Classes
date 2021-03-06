#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "OrderService.h"
#include "GameplayTagsOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGameplayTagsOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_SetTags;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnHitComponent;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnAbilityComponent;
    
    UGameplayTagsOrderService();
};

