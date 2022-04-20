#include "AbilityTask_ApplyRootMotionRadialForce.h"
#include "Net/UnrealNetwork.h"

class UCurveFloat;
class UGameplayAbility;
class AActor;
class UAbilityTask_ApplyRootMotionRadialForce;

UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewLocation, AActor* NewLocationActor, float NewStrength, float NewDuration, float NewRadius, bool NewBIsPush, bool NewBIsAdditive, bool NewBNoZForce, UCurveFloat* NewStrengthDistanceFalloff, UCurveFloat* NewStrengthOverTime, bool NewBUseFixedWorldDirection, FRotator NewFixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish) {
    return NULL;
}

void UAbilityTask_ApplyRootMotionRadialForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, Location);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, LocationActor);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, Strength);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, Duration);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, Radius);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, bIsPush);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, bIsAdditive);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, bNoZForce);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, StrengthDistanceFalloff);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, StrengthOverTime);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, bUseFixedWorldDirection);
    DOREPLIFETIME(UAbilityTask_ApplyRootMotionRadialForce, FixedWorldDirection);
}

UAbilityTask_ApplyRootMotionRadialForce::UAbilityTask_ApplyRootMotionRadialForce() {
    this->LocationActor = NULL;
    this->Strength = 0.00f;
    this->Duration = 0.00f;
    this->Radius = 0.00f;
    this->bIsPush = false;
    this->bIsAdditive = false;
    this->bNoZForce = false;
    this->StrengthDistanceFalloff = NULL;
    this->StrengthOverTime = NULL;
    this->bUseFixedWorldDirection = false;
}

