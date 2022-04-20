#pragma once
#include "CoreMinimal.h"
#include "ApplyRootMotionRadialForceDelegateDelegate.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "AbilityTask_ApplyRootMotionRadialForce.generated.h"

class AActor;
class UCurveFloat;
class UGameplayAbility;
class UAbilityTask_ApplyRootMotionRadialForce;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FApplyRootMotionRadialForceDelegate OnFinish;
    
protected:
    UPROPERTY(Replicated)
    FVector Location;
    
    UPROPERTY(Replicated)
    AActor* LocationActor;
    
    UPROPERTY(Replicated)
    float Strength;
    
    UPROPERTY(Replicated)
    float Duration;
    
    UPROPERTY(Replicated)
    float Radius;
    
    UPROPERTY(Replicated)
    bool bIsPush;
    
    UPROPERTY(Replicated)
    bool bIsAdditive;
    
    UPROPERTY(Replicated)
    bool bNoZForce;
    
    UPROPERTY(Replicated)
    UCurveFloat* StrengthDistanceFalloff;
    
    UPROPERTY(Replicated)
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY(Replicated)
    bool bUseFixedWorldDirection;
    
    UPROPERTY(Replicated)
    FRotator FixedWorldDirection;
    
public:
    UAbilityTask_ApplyRootMotionRadialForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewLocation, AActor* NewLocationActor, float NewStrength, float NewDuration, float NewRadius, bool NewBIsPush, bool NewBIsAdditive, bool NewBNoZForce, UCurveFloat* NewStrengthDistanceFalloff, UCurveFloat* NewStrengthOverTime, bool NewBUseFixedWorldDirection, FRotator NewFixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
    
};

