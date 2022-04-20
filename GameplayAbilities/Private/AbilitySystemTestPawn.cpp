#include "AbilitySystemTestPawn.h"
#include "AbilitySystemComponent.h"

AAbilitySystemTestPawn::AAbilitySystemTestPawn() {
    this->AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent0"));
}

