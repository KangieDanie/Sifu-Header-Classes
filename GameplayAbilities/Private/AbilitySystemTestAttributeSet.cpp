#include "AbilitySystemTestAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UAbilitySystemTestAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, MaxHealth);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, Health);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, Mana);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, MaxMana);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, SpellDamage);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, PhysicalDamage);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, CritChance);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, CritMultiplier);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, ArmorDamageReduction);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, DodgeChance);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, LifeSteal);
    DOREPLIFETIME(UAbilitySystemTestAttributeSet, Strength);
}

UAbilitySystemTestAttributeSet::UAbilitySystemTestAttributeSet() {
    this->MaxHealth = 100.00f;
    this->Health = 100.00f;
    this->Mana = 100.00f;
    this->MaxMana = 100.00f;
    this->Damage = 0.00f;
    this->SpellDamage = 0.00f;
    this->PhysicalDamage = 0.00f;
    this->CritChance = 0.00f;
    this->CritMultiplier = 0.00f;
    this->ArmorDamageReduction = 0.00f;
    this->DodgeChance = 0.00f;
    this->LifeSteal = 0.00f;
    this->Strength = 0.00f;
    this->StackingAttribute1 = 0.00f;
    this->StackingAttribute2 = 0.00f;
    this->NoStackAttribute = 0.00f;
}

