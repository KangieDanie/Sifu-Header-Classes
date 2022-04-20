#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ImpactResult.h"
#include "HitRequest.h"
#include "DefenseNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UDefenseNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_alName;
    
    UDefenseNotifyState();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnHitDefense(const FHitResult& _hitResult, FImpactResult& _Impact, const FHitRequest& _hitRequest, bool& _bShouldDismiss) const;
    
};

