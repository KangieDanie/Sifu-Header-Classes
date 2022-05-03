#pragma once
#include "CoreMinimal.h"
#include "HealthComponent.h"
#include "DestructibleStateInfo.h"
#include "FXInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
#include "InteractiveDestructionComponent.generated.h"

class UMeshComponent;
class UStaticMesh;
class USkeletalMesh;
class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UInteractiveDestructionComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChanged, int32, _iNewState);
    
    UPROPERTY(BlueprintAssignable)
    FOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_iHitByCharaDamage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_iHitByObjectDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FDestructibleStateInfo> m_DestructibleStateInfo;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    TArray<UMeshComponent*> m_aOwnerMeshToSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* m_DestroyedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* m_DestroyedSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFXInfo m_ImpactParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFXInfo m_BreakParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    TArray<UStaticMeshComponent*> m_SimChunks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_vRandomSpreadAmplitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseCustomCollisionProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCollisionProfileName m_DeactivatedChunkCollisionProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fChunkDeactivationDelay;
    
public:
    UInteractiveDestructionComponent();
    UFUNCTION(BlueprintPure)
    int32 BPF_GetStateIndex() const;
    
};

