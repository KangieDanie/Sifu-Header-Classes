#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyTypeFlag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnTimeDilationChangedSignatureDelegate.h"
#include "ReplayTimelineController.generated.h"

class UReplayKey;
class UReplayCutManagement;
class UReplayTimelineModel;

UCLASS(BlueprintType)
class SIFU_API UReplayTimelineController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayCutManagement* m_CutManagement;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UReplayTimelineModel* m_Model;
    
    UPROPERTY(BlueprintAssignable)
    FOnTimeDilationChangedSignature m_OnTimeDilationChanged;
    
public:
    UReplayTimelineController();
    UFUNCTION(BlueprintCallable)
    void BPF_SaveKeys();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTransitionContext();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetModel();
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetCurrentKeyOfType(EReplayKeyTypeFlag _eTypeFlag) const;
    
};

