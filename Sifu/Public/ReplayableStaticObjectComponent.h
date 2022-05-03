#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ReplayableStaticObjectComponent.generated.h"

class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableStaticObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* m_RootPrimComp;
    
public:
    UReplayableStaticObjectComponent();
};

