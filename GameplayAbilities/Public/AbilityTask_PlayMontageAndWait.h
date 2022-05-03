#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "MontageWaitSimpleDelegateDelegate.h"
#include "AbilityTask_PlayMontageAndWait.generated.h"

class UAnimMontage;
class UAbilityTask_PlayMontageAndWait;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_PlayMontageAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnCancelled;
    
private:
    UPROPERTY()
    UAnimMontage* MontageToPlay;
    
    UPROPERTY()
    float Rate;
    
    UPROPERTY()
    FName StartSection;
    
    UPROPERTY()
    float AnimRootMotionTranslationScale;
    
    UPROPERTY()
    float StartTimeSeconds;
    
    UPROPERTY()
    bool bStopWhenAbilityEnds;
    
public:
    UAbilityTask_PlayMontageAndWait();
    UFUNCTION()
    void OnMontageInterrupted();
    
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds);
    
};

