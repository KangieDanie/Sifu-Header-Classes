#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WaitOverlapDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AbilityTask_WaitOverlap.generated.h"

class UAbilityTask_WaitOverlap;
class UGameplayAbility;
class UPrimitiveComponent;
class AActor;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitOverlap : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitOverlapDelegate OnOverlap;
    
    UAbilityTask_WaitOverlap();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitOverlap* WaitForOverlap(UGameplayAbility* OwningAbility);
    
    UFUNCTION()
    void OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

