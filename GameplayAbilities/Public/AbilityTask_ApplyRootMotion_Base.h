#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AbilityTask_ApplyRootMotion_Base.generated.h"

class UCharacterMovementComponent;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotion_Base : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FName ForceName;
    
    UPROPERTY(Replicated)
    ERootMotionFinishVelocityMode FinishVelocityMode;
    
    UPROPERTY(Replicated)
    FVector FinishSetVelocity;
    
    UPROPERTY(Replicated)
    float FinishClampVelocity;
    
    UPROPERTY(Export)
    UCharacterMovementComponent* MovementComponent;
    
public:
    UAbilityTask_ApplyRootMotion_Base();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

