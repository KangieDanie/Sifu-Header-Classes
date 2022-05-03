#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnTaskStateChangedSignatureDelegate.h"
#include "ReplayManagement.generated.h"

UCLASS(BlueprintType, Config=Replay)
class SIFU_API UReplayManagement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnTaskStateChangedSignature m_OnTaskStateChanged;
    
public:
    UReplayManagement();
    UFUNCTION(BlueprintCallable)
    void BPF_ResetReplayEditorMetaData(const FString& _replayID);
    
protected:
    UFUNCTION(BlueprintPure)
    static bool BPF_IsReplayVersionCompatible(int32 _iReplayVersion, int32 _iChangeList);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsCurrentReplay(const FString& _replayID) const;
    
};

