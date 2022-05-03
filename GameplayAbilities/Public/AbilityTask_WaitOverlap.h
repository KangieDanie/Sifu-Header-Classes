#pragma once
#include "CoreMinimal.h"
#include "WaitOverlapDelegateDelegate.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AbilityTask_WaitOverlap.generated.h"

class UAbilityTask_WaitOverlap;
class UGameplayAbility;
class AActor;
class UPrimitiveComponent;

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

