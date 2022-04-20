#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BPOrderServiceInstance.h"
#include "ParryToHitActionOrderService.generated.h"

class UHitActionLauncher;
class UBaseHitDetectionDB;

UCLASS(EditInlineNew)
class SIFU_API UParryToHitActionOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitActionLauncher> m_hitActionLauncher;
    
    UPROPERTY(EditAnywhere)
    TArray<UBaseHitDetectionDB*> m_IgnoringHitDetectionDBs;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_IgnoringGameplayTagContainer;
    
    UParryToHitActionOrderService();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnParryFailed(FBPOrderServiceInstance _description) const;
    
};

