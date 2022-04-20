#include "GameplayAbilityTargetActor.h"
#include "Net/UnrealNetwork.h"

void AGameplayAbilityTargetActor::ConfirmTargeting() {
}

void AGameplayAbilityTargetActor::CancelTargeting() {
}

void AGameplayAbilityTargetActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGameplayAbilityTargetActor, StartLocation);
    DOREPLIFETIME(AGameplayAbilityTargetActor, bDestroyOnConfirmation);
    DOREPLIFETIME(AGameplayAbilityTargetActor, SourceActor);
    DOREPLIFETIME(AGameplayAbilityTargetActor, Filter);
    DOREPLIFETIME(AGameplayAbilityTargetActor, bDebug);
}

AGameplayAbilityTargetActor::AGameplayAbilityTargetActor() {
    this->ShouldProduceTargetDataOnServer = false;
    this->MasterPC = NULL;
    this->OwningAbility = NULL;
    this->bDestroyOnConfirmation = true;
    this->SourceActor = NULL;
    this->ReticleClass = NULL;
    this->bDebug = false;
    this->GenericDelegateBoundASC = NULL;
}

