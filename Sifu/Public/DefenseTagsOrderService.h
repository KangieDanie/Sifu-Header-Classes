#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "DefenseTagsOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDefenseTagsOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_SetHitBoxRequiredTags;
    
    UDefenseTagsOrderService();
};

