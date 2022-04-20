#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPushObstacleReaction.h"
#include "HitBox.h"
#include "PushedObstacleComponent.generated.h"

class UPushedObstacleComponent;
class AFightingCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPushedObstacleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPushSignature, UPushedObstacleComponent*, _component, AFightingCharacter*, _pushedPlayer);
    
    UPROPERTY(EditAnywhere)
    bool m_bActive;
    
    UPROPERTY(EditAnywhere)
    EPushObstacleReaction m_ePushReaction;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintAssignable)
    FPushSignature m_OnPushDetected;
    
    UPushedObstacleComponent();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPushInterruption(AFightingCharacter* _interruptedCharacter);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    EPushObstacleReaction BPE_GetPushReaction(AFightingCharacter* _pushedPlayer);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_GetPushInterruptionHit(AFightingCharacter* _interruptedCharacter, FHitBox& _inOutResult);
    
};

