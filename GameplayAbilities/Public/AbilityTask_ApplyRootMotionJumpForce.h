#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionJumpForceDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AbilityTask_ApplyRootMotionJumpForce.generated.h"

class UCurveVector;
class UCurveFloat;
class UGameplayAbility;
class UAbilityTask_ApplyRootMotionJumpForce;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FApplyRootMotionJumpForceDelegate OnFinish;
    
    UPROPERTY(BlueprintAssignable)
    FApplyRootMotionJumpForceDelegate OnLanded;
    
protected:
    UPROPERTY(Replicated)
    FRotator Rotation;
    
    UPROPERTY(Replicated)
    float Distance;
    
    UPROPERTY(Replicated)
    float Height;
    
    UPROPERTY(Replicated)
    float Duration;
    
    UPROPERTY(Replicated)
    float MinimumLandedTriggerTime;
    
    UPROPERTY(Replicated)
    bool bFinishOnLanded;
    
    UPROPERTY(Replicated)
    UCurveVector* PathOffsetCurve;
    
    UPROPERTY(Replicated)
    UCurveFloat* TimeMappingCurve;
    
public:
    UAbilityTask_ApplyRootMotionJumpForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnLandedCallback(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator NewRotation, float NewDistance, float NewHeight, float NewDuration, float NewMinimumLandedTriggerTime, bool NewBFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve);
    
};

