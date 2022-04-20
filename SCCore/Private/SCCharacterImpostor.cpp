#include "SCCharacterImpostor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationBudgetAllocator -ObjectName=SkeletalMeshComponentBudgeted -FallbackName=SkeletalMeshComponentBudgeted
#include "SCStreamingActorComponent.h"


ASCCharacterImpostor::ASCCharacterImpostor() {
    this->m_SpawnTransformType = EImposterSpawnTransformType::Actor;
    this->m_RagdollConfig = NULL;
    this->m_Mesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("SkeletalMesh"));
    this->m_StreamingComponent = CreateDefaultSubobject<USCStreamingActorComponent>(TEXT("StreamingActorComponent"));
    this->m_AnimInstance = NULL;
}

