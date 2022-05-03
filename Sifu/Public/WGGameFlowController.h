#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=GameFlowController -FallbackName=GameFlowController
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EWGGameFlowMapOption.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "WGGameFlowController.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGGameFlowController : public UGameFlowController {
    GENERATED_BODY()
public:
    UWGGameFlowController();
    UFUNCTION(BlueprintPure)
    bool BPF_FindMapOptionInTags(const FGameplayTagContainer& _tagsToSearch, EWGGameFlowMapOption _eMapOption) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FGameplayTag BPE_GetMapOptionTag(EWGGameFlowMapOption _eMapOption) const;
    
};

