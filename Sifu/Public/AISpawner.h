#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPatrolLaunchMethod.h"
#include "IdleAnimAndTransition.h"
#include "EGlobalBehaviors.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "EFactionsEnums.h"
#include "EFirstSpawnMethod.h"
#include "CarriedProps.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "AISpawner.generated.h"

class APathPatrol;
class AAISpawner;
class UAIFightingComponent;
class UAIIdleDB;
class ABaseCharacter;
class UAIPhaseScenario;
class USceneComponent;
class ABaseWeapon;

UCLASS()
class SIFU_API AAISpawner : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIPatrolCompleted, UAIFightingComponent*, AI, APathPatrol*, Patrol);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIDownDynamic, AAISpawner*, Spawner);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAICharacterGlobalBehaviorChanged, ABaseCharacter*, Character, EGlobalBehaviors, NewBehavior);
    
    UPROPERTY(BlueprintAssignable)
    FAIDownDynamic AIDownDelegateMulticast;
    
    UPROPERTY(BlueprintAssignable)
    FAIPatrolCompleted OnPatrolCompleted;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FGenericDialogEventDelegate OnGenericDialogEvent;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnDialogCompleted;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnDialogCut;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDialogLineEvent OnLineEnded;
    
    UPROPERTY(BlueprintAssignable)
    FAICharacterGlobalBehaviorChanged OnGlobalBehaviorChanged;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bForcedPreFightLookAtTarget;
    
    UPROPERTY(EditInstanceOnly)
    AActor* m_ForcedPreFightLookAtTarget;
    
    UPROPERTY(EditInstanceOnly)
    APathPatrol* m_pathPatrol;
    
    UPROPERTY(EditAnywhere)
    EPatrolLaunchMethod m_ePatrolLaunchMethod;
    
    UPROPERTY(EditAnywhere)
    UAIPhaseScenario* m_PhaseScenario;
    
    UPROPERTY(EditAnywhere)
    EFactionsEnums m_eFaction;
    
    UPROPERTY(EditAnywhere)
    float m_fRespawnTime;
    
    UPROPERTY(EditAnywhere)
    float m_fSpawnDelay;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanRespawn;
    
    UPROPERTY(EditAnywhere)
    bool m_bLowStructureOnSpawn;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsLoneWolf;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_iSoundTensionLevelOverride;
    
    UPROPERTY(EditInstanceOnly)
    FName m_VoiceVariationSwitchOverride;
    
    UPROPERTY(EditAnywhere)
    int32 m_iChargesToAddWhenKilled;
    
    UPROPERTY(EditAnywhere)
    int32 m_iDeathCounterDecreaseWhenKilled;
    
    UPROPERTY(EditAnywhere)
    bool m_bDeathCounterResetWhenKilled;
    
    UPROPERTY(EditAnywhere)
    EFirstSpawnMethod m_eFirstSpawnMethod;
    
    UPROPERTY(Export)
    USceneComponent* m_RootComp;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FCarriedProps> m_carriedProps;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<ABaseWeapon> m_carriedWeapon;
    
    UPROPERTY()
    FName m_CarriedWeaponPoolName;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bKeepIdleAnimDuringAlertedDialogs;
    
    UPROPERTY()
    TArray<FIdleAnimAndTransition> m_IdleAndExitAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UAIIdleDB* m_AIIdleDB;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FAnimContainer m_AlertedAnimation;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<float> m_rawCustomPrimitiveData;
    
    AAISpawner();
private:
    UFUNCTION()
    void OnAiBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<ABaseWeapon> GetCarriedWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_WantsSpawn();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnSpawnAIDelayed();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartAssociatedPatrolOnSpawnedAI();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSpawningClass(TSubclassOf<ABaseCharacter> _class);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPhaseScenario(UAIPhaseScenario* _scenario);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanRespawn(bool _canRespawn);
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasSpawnedAI() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ABaseCharacter> BPF_GetSpawningClass() const;
    
    UFUNCTION(BlueprintPure)
    ABaseCharacter* BPF_GetSpawnedAI() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetCarriedWeaponPoolName() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FCarriedProps> BPF_GetCarriedProps() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRespawnFinished(AActor* _ActorAIRespawned);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnIADown(AActor* _ActorAI);
    
};

