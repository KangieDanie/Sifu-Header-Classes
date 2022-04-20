#include "AbilityTask_MoveToLocation.h"
#include "Net/UnrealNetwork.h"

class UCurveFloat;
class UGameplayAbility;
class UCurveVector;
class UAbilityTask_MoveToLocation;

UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve) {
    return NULL;
}

void UAbilityTask_MoveToLocation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTask_MoveToLocation, StartLocation);
    DOREPLIFETIME(UAbilityTask_MoveToLocation, TargetLocation);
    DOREPLIFETIME(UAbilityTask_MoveToLocation, DurationOfMovement);
    DOREPLIFETIME(UAbilityTask_MoveToLocation, LerpCurve);
    DOREPLIFETIME(UAbilityTask_MoveToLocation, LerpCurveVector);
}

UAbilityTask_MoveToLocation::UAbilityTask_MoveToLocation() {
    this->DurationOfMovement = 0.00f;
    this->LerpCurve = NULL;
    this->LerpCurveVector = NULL;
}

