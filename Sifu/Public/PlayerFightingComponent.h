#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdAgentInterface -FallbackName=CrowdAgentInterface
#include "PlayerGenderSpecificData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "OutfitData.h"
#include "PlayerFightingComponent.generated.h"

class USkeletalMesh;
class UMaterialInterface;
class AActor;
class UEquipmentSelectionData;
class UBaseMovementDB;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UPlayerFightingComponent : public UActorComponent, public ICrowdAgentInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeshChanged, ECharacterGender, _eNewGender);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDialogStatusChanged);
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Dialog)
    bool m_bIsInDialog;
    
    UPROPERTY(BlueprintAssignable)
    FDialogStatusChanged OnDialogStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnMeshChanged OnMeshChanged;
    
private:
    UPROPERTY(EditAnywhere)
    UEquipmentSelectionData* m_DefaultEquipmentSelection;
    
    UPROPERTY(EditAnywhere)
    float m_fLockMoveFadeDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fEnemyBehindDist;
    
    UPROPERTY(EditAnywhere)
    float m_fEnemyBehindCosAngle;
    
    UPROPERTY(EditAnywhere)
    FPlayerGenderSpecificData m_ByGenderData[2];
    
    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> m_ManSkeletalMeshPath;
    
    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> m_WomanSkeletalMeshPath;
    
    UPROPERTY()
    TSoftObjectPtr<UBaseMovementDB> m_ManBaseMovementDBPath;
    
    UPROPERTY()
    TSoftObjectPtr<UBaseMovementDB> m_WomanBaseMovementDBPath;
    
    UPROPERTY(EditDefaultsOnly)
    ECharacterGender m_eForcedGender;
    
    UPROPERTY(EditAnywhere)
    bool m_bFakePlayer;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PlayerPositionMPCParameterName;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 m_iOutfitIndex;
    
public:
    UPlayerFightingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnTargetChangedCallback(AActor* _oldTarget, AActor* _newTarget);
    
private:
    UFUNCTION()
    void OnStatsUpdated();
    
    UFUNCTION()
    void OnRep_Dialog();
    
    UFUNCTION()
    void OnLanded();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SwapOutfit(int32 _iNewOutfitIndex, UMaterialInterface* _forcedMaterial);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwapMesh(const FOutfitData& _outfitData, UMaterialInterface* _forcedMaterial);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsInEndOfMovesetTutorial(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetIsInDialog(bool _bInDialog);
    
    UFUNCTION(BlueprintPure)
    FPlayerGenderSpecificData BPF_GetCurrentGenderData() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

