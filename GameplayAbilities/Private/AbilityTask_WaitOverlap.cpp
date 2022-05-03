#include "AbilityTask_WaitOverlap.h"

class UGameplayAbility;
class UAbilityTask_WaitOverlap;
class AActor;
class UPrimitiveComponent;

UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(UGameplayAbility* OwningAbility) {
    return NULL;
}

void UAbilityTask_WaitOverlap::OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UAbilityTask_WaitOverlap::UAbilityTask_WaitOverlap() {
}

