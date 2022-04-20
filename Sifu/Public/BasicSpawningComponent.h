#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BasicSpawningComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UBasicSpawningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBasicSpawningComponent();
};

