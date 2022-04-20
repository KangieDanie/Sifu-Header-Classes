#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityActorInfo.generated.h"

class USkeletalMeshComponent;
class AActor;
class APlayerController;
class UAbilitySystemComponent;
class UAnimInstance;
class UMovementComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> OwnerActor;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> AvatarActor;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<APlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UAnimInstance> AnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UMovementComponent> MovementComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FName AffectedAnimInstanceTag;
    
    FGameplayAbilityActorInfo();
};

