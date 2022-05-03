#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCActor -FallbackName=SCActor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDebugMovableState.h"
#include "InputAction.h"
#include "InteractiveMovable.generated.h"

class AActor;
class UInteractiveDestructionComponent;
class USCStreamingActorComponent;
class UMovableInteractionComponent;
class UTargetSettingsDB;
class USCSaveGameComponent;
class AFightingCharacter;

UCLASS(Abstract)
class SIFU_API AInteractiveMovable : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USCStreamingActorComponent* m_StreamingComponent;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableSreamingEvents;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMovableInteractionComponent* m_InteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInteractiveDestructionComponent* m_DestructibleComponent;
    
    UPROPERTY(Export)
    USCSaveGameComponent* m_SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fAngularFallingSpeedThreshold;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fLinearFallingSpeedThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsBreakSilent;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UTargetSettingsDB> m_throwTargetSettingsDB;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TWeakObjectPtr<AActor> m_TmpTarget;
    
    UPROPERTY(SaveGame)
    FTransform m_SavedTransform;
    
public:
    AInteractiveMovable();
protected:
    UFUNCTION()
    void OnUpdatedFromSaveCallback();
    
    UFUNCTION()
    void OnPreSaveLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetInstigator(AActor* _Instigator);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetActivate(bool _bActivated);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsReadyToUse() const;
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetPivotLoc() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetInstigator();
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetHUDLocation() const;
    
    UFUNCTION(BlueprintPure)
    EDebugMovableState BPF_GetDebugMovableState() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ShowMovableInteractions();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUsabilityUpdated(bool _bUsable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnObjectBreak();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HideMovableInteractions();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_HasHitChara();
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FText BPE_GetHUDActionText(bool& _bUsable) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    InputAction BPE_FindAppropriateActionFromContext(AFightingCharacter* _user) const;
    
};

