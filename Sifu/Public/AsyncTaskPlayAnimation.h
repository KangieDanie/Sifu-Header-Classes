#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EUMGSequencePlayMode -FallbackName=EUMGSequencePlayMode
#include "AsyncTaskPlayAnimation.generated.h"

class UWidgetAnimation;
class UAsyncTaskPlayAnimation;
class UObject;

UCLASS()
class UAsyncTaskPlayAnimation : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskPlayTransitionAnimation);
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskPlayTransitionAnimation OnFinished;
    
    UAsyncTaskPlayAnimation();
    UFUNCTION()
    void OnTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskPlayAnimation* BPF_PlayTransitionAnimationAsync(UObject* _menu, UWidgetAnimation* _inAnimation, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode, bool _bDisableInputs);
    
};

