#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemTestAttributeSet.generated.h"

UCLASS(BlueprintType)
class GAMEPLAYABILITIES_API UAbilitySystemTestAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float Mana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MaxMana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float SpellDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float PhysicalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float CritChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float CritMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ArmorDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float DodgeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float LifeSteal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StackingAttribute1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StackingAttribute2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoStackAttribute;
    
    UAbilitySystemTestAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

