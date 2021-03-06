#include "LockableDoor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCSaveGameComponent -FallbackName=SCSaveGameComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

class UAnimationAsset;
class APawn;
class AFightingCharacter;

void ALockableDoor::SetOpened(bool bOpened) {
}

void ALockableDoor::SetLocked(bool bLocked) {
}

void ALockableDoor::BPF_SetNonOccluding(bool bNonOccluding) {
}

void ALockableDoor::BPF_SetDoorInOpenedState(UAnimationAsset* _openingAnimAsset) {
}

void ALockableDoor::BPF_ReplayRecordObjectInteraction_Implementation(APawn* _Instigator, FName _way) {
}


void ALockableDoor::BPF_RemoveNavBuildLock() {
}

void ALockableDoor::BPF_OpenDoor(AFightingCharacter* _interactor, UAnimationAsset* _openingAnimAsset, UAnimationAsset* _closingAnimAsset) {
}

void ALockableDoor::BPF_CloseDoor() {
}

void ALockableDoor::BPF_AddNavBuildLock() {
}






ALockableDoor::ALockableDoor() {
    this->m_SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->m_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->m_fCloseDistThreshold = 500.00f;
    this->m_SaveComponent = CreateDefaultSubobject<USCSaveGameComponent>(TEXT("SaveComponent"));
    this->m_bShouldStayOpen = false;
    this->m_levelSequenceWay1 = NULL;
    this->m_levelSequenceWay2 = NULL;
    this->m_bCanLockNavBuild = true;
    this->m_bLocked = false;
    this->m_bOpened = false;
}

