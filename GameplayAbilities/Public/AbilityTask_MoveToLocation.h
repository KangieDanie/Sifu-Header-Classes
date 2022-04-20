#pragma once
#include "CoreMinimal.h"
#include "MoveToLocationDelegateDelegate.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AbilityTask_MoveToLocation.generated.h"

class UGameplayAbility;
class UCurveFloat;
class UCurveVector;
class UAbilityTask_MoveToLocation;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_MoveToLocation : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMoveToLocationDelegate OnTargetLocationReached;
    
protected:
    UPROPERTY(Replicated)
    FVector StartLocation;
    
    UPROPERTY(Replicated)
    FVector TargetLocation;
    
    UPROPERTY(Replicated)
    float DurationOfMovement;
    
    UPROPERTY(Replicated)
    UCurveFloat* LerpCurve;
    
    UPROPERTY(Replicated)
    UCurveVector* LerpCurveVector;
    
public:
    UAbilityTask_MoveToLocation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_MoveToLocation* MoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve);
    
};

