#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "EImposterSpawnTransformType.h"
#include "SCCharacterImpostor.generated.h"

class USkeletalMeshComponentBudgeted;
class UAnimInstance;
class USCStreamingActorComponent;
class USCRagdollConfigDB;
class ASCCharacter;

UCLASS()
class SCCORE_API ASCCharacterImpostor : public ASCActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EImposterSpawnTransformType m_SpawnTransformType;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    USCRagdollConfigDB* m_RagdollConfig;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponentBudgeted* m_Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USCStreamingActorComponent* m_StreamingComponent;
    
    UPROPERTY(Transient)
    UAnimInstance* m_AnimInstance;
    
public:
    ASCCharacterImpostor();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_MimicCharacter(ASCCharacter* _characterToMimic);
    
};

