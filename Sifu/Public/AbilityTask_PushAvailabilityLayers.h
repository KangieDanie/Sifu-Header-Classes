#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "EALBinaryOperation.h"
#include "EALPriority.h"
#include "AbilityTask_PushAvailabilityLayers.generated.h"

class UAbilityTask_PushAvailabilityLayers;
class UAvailabilityLayerData;
class UGameplayAbility;

UCLASS()
class SIFU_API UAbilityTask_PushAvailabilityLayers : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UAbilityTask_PushAvailabilityLayers();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PushAvailabilityLayers* BPF_PushAvailabilityLayerWithContext(UGameplayAbility* _owningAbility, UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority, bool _bPushContext, EALPriority _eContextPriority);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PushAvailabilityLayers* BPF_PushAvailabilityLayer(UGameplayAbility* _owningAbility, UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority);
    
};

