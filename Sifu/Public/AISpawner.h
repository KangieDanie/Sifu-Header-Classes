#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "EGlobalBehaviors.h"
#include "EPatrolLaunchMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "AICharacterSpawnParams.h"
#include "EFactionsEnums.h"
#include "EFirstSpawnMethod.h"
#include "CarriedProps.h"
#include "IdleAnimAndTransition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "AISpawner.generated.h"

class UAIFightingComponent;
class ABaseCharacter;
class APathPatrol;
class AAISpawner;
class UAIPhaseScenario;
class USceneComponent;
class ABaseWeapon;
class UAIIdleDB;

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
    FAICharacterSpawnParams m_SpawnParams;
    
    UPROPERTY()
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bForcedPreFightLookAtTarget;
    
    UPROPERTY(EditInstanceOnly)
    AActor* m_ForcedPreFightLookAtTarget;
    
    UPROPERTY(EditInstanceOnly)
    APathPatrol* m_pathPatrol;
    
    UPROPERTY(EditAnywhere)
    EPatrolLaunchMethod m_ePatrolLaunchMethod;
    
    UPROPERTY()
    UAIPhaseScenario* m_PhaseScenarios[3];
    
    UPROPERTY()
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
    
    UPROPERTY()
    int32 m_iChargesToAddWhenKilled;
    
    UPROPERTY()
    int32 m_iDeathCounterDecreaseWhenKilled;
    
    UPROPERTY()
    bool m_bDeathCounterResetWhenKilled;
    
    UPROPERTY(EditAnywhere)
    EFirstSpawnMethod m_eFirstSpawnMethod;
    
    UPROPERTY(Export)
    USceneComponent* m_RootComp;
    
    UPROPERTY()
    TArray<FCarriedProps> m_carriedProps;
    
    UPROPERTY()
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
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABaseCharacter> m_EditorClass;
    
    UPROPERTY(Transient)
    UAIPhaseScenario* m_PhaseScenarioOverride;
    
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
    
    UFUNCTION(BlueprintCallable)
    void BPF_AskForRespawn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRespawnFinished(AActor* _ActorAIRespawned);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnIADown(AActor* _ActorAI);
    
};

