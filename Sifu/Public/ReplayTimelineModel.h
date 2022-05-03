#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplayKeyData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnReplayKeyEventDelegate.h"
#include "ReplayTimelineModel.generated.h"

class UReplayKey;

UCLASS(BlueprintType, Config=Replay)
class SIFU_API UReplayTimelineModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimelineRecalcDilatedTimeSignature, int32, iRecalcStartIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKeyAddedSignature, UReplayKey*, _key, bool, _bCanSelectKey);
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnKeyAddedSignature m_OnKeyAdded;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyEvent m_OnKeyRemoved;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnTimelineRecalcDilatedTimeSignature m_OnRecalcDilatedTime;
    
protected:
    UPROPERTY()
    TArray<UReplayKey*> m_Keys;
    
public:
    UReplayTimelineModel();
    UFUNCTION(BlueprintCallable)
    static void BPF_UpdateKeyLocationData(UReplayKey* _key, const FVector& _vLocation, const FQuat& _qRotation);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_UpdateKeyData(UReplayKey* _key, const FReplayKeyData& _data);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RecalcDilatedTimes(int32 _iStartingIndex);
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_IsBoundaryKey(int32 _iIndex) const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_HasUndoStateAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasRedoStateAvailable() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_HasKey(int32 _iKeyIndex) const;
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetPreviousKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetNextKey(const UReplayKey* _key) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UReplayKey*> BPF_GetKeys();
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetKeyAtKeyFrameIndex(int32 _iKeyFrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    UReplayKey* BPF_GetKey(int32 _iIndex) const;
    
};

