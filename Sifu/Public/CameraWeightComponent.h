#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CameraWeightComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCameraWeightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCameraWeightComponent();
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetWeight() const;
    
};

