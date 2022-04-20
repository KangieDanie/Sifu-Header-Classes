#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EnvironmentalImpactComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UEnvironmentalImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEnvironmentalImpactComponent();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnImpact(AActor* _Instigator, uint8 _uiImpactType, const FHitResult& _hit);
    
};

