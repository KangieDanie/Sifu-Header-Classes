#pragma once
#include "CoreMinimal.h"
#include "InteractiveMovable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPushableState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCCollisionResponsePreset -FallbackName=SCCollisionResponsePreset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "PushableActor.generated.h"

class UStaticMeshComponent;
class UPushObjMovementComponent;
class UBoxComponent;
class USceneComponent;
class AFightingCharacter;
class AActor;
class ASCPlayerController;

UCLASS()
class SIFU_API APushableActor : public AInteractiveMovable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateUpdated, EPushableState, _eNewState);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fFallingVelocityReduc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_vFallingVelocityOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D m_vViewMargin;
    
    UPROPERTY(BlueprintAssignable)
    FStateUpdated OnStateUpdated;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* m_StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPushObjMovementComponent* m_MovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* m_InteractionBox;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* m_PivotLoc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_fColProfileAtRest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponsePreset m_fColProfilePushed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fUsabilityAngleRestriction;
    
public:
    APushableActor();
    UFUNCTION(BlueprintCallable)
    void BPF_SetPushableState(EPushableState _eNewState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Push(const AFightingCharacter* _character);
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetTarget(const AFightingCharacter* _character) const;
    
    UFUNCTION(BlueprintPure)
    EPushableState BPF_GetPushableState() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector2D BPF_GetLeftStickValues(ASCPlayerController* _playerController) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_AngleBetweenMoveInputAndObject(const AFightingCharacter* _character) const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPushed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HasHitWall();
    
    UFUNCTION(BlueprintImplementableEvent)
    FBox BPE_GetMovementBox(const AFightingCharacter* _player) const;
    
};

