#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OrderService.h"
#include "BPOrderServiceInstance.h"
#include "TranslateToTargetOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UTranslateToTargetOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseAnimRootMotion;
    
    UTranslateToTargetOrderService();
    UFUNCTION(BlueprintNativeEvent)
    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance) const;
    
};

