#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCGameInstanceState -FallbackName=ESCGameInstanceState
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=GameFlow -FallbackName=GameFlow
#include "EMenuEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EWGGameFlowMapOption.h"
#include "WGGameFlow.generated.h"

class ULevelStreaming;

UCLASS()
class SIFU_API UWGGameFlow : public UGameFlow {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSCOnSessionStateChanged, ESCGameInstanceState, _previous, ESCGameInstanceState, _current);
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnNextMapPreloadOver;
    
protected:
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> m_pendingLoadingLevels;
    
public:
    UWGGameFlow();
    UFUNCTION()
    void TravelToPendingMapInternal(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, bool _bKeepCheats);
    
protected:
    UFUNCTION()
    void OnControllerReconnectConfirm();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TravelToPendingMap(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, float _fFadeDuration, bool _bKeepCheats);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestartCurrentMap();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetTags();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RaiseTag(FGameplayTag _tagToRaise);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadNextMap(bool _bForceClassicTravel);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsPendingTravel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GoToNextMap(bool _bSaveBefore);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_GotoMap(FName _mapTag, FGameplayTagContainer _specificMapOptions, bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, EMenuEnum _eMenuToShow, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, bool _bKeepCheats);
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetFirstPlayableMapTagName() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetCurrentMapTag() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_CurrentMapHasMapOption(EWGGameFlowMapOption _eMapOption) const;
    
};

