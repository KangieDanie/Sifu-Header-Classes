#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ReplayableDestructionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableDestructionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(ReplicatedUsing=OnRep_BrokenStateUpdate)
    bool m_bBroken;
    
    UReplayableDestructionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_BrokenStateUpdate();
    
};

