#pragma once
#include "CoreMinimal.h"
#include "OnReplayKeyIndexUpdateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplayKeyData.h"
#include "OnReplayKeySelectionUpdateDelegate.h"
#include "OnReplayKeyEventDelegate.h"
#include "OnReplayKeyDataUpdateDelegate.h"
#include "OnReplayKeyHoveredUpdateDelegate.h"
#include "OnReplayKeyTransitionUpdateDelegate.h"
#include "OnReplayKeyTimeUpdateDelegate.h"
#include "ReplayKey.generated.h"

UCLASS(BlueprintType)
class SIFU_API UReplayKey : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyData m_Data;
    
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyEvent m_OnDelete;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyEvent m_OnPostDelete;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyIndexUpdate m_OnIndexUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyDataUpdate m_OnDataUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyTransitionUpdate m_OnTransitionUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeySelectionUpdate m_OnSelectionUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyHoveredUpdate m_OnHoveredUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnReplayKeyTimeUpdate m_OnTimeUpdate;
    
    UReplayKey();
protected:
    UFUNCTION(BlueprintPure)
    static bool BPF_HasReplayKeyType(int32 _iKeyTypeFlags, int32 _iContainsKeyTypeFlags);
    
};

