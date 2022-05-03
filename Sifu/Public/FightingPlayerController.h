#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MenuStackInfos.h"
#include "CharacterProgressionReward.h"
#include "SCPlayerController.h"
#include "EMenuEnum.h"
#include "ERelationshipTypes.h"
#include "ECharacterProgressionRewardTypes.h"
#include "InputAction.h"
#include "EGameOptionTypes.h"
#include "ECycleDirection.h"
#include "InteractionTextStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "EDangerStates.h"
#include "CoopGroup.h"
#include "EQuadrantTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "FightingPlayerController.generated.h"

class UWidgetPoolComponent;
class UCharacterProgressionUnlockDB;
class UMaterialInterface;
class AActor;
class UASMDetectionComponent;
class AFightingCharacter;
class AController;
class AAISpawner;
class ASkillTree;
class UTexture2D;
class UMenuWidget;
class UUserWidget;
class UPopupWidget;
class UMaterialParameterCollection;
class UEquipmentSelectionData;
class UTargetableWidgetUpdaterComponent;
class UPickUpMenu;
class AInteractiveObject;
class UInteractionObjectComponent;
class UPanelWidget;

UCLASS()
class SIFU_API AFightingPlayerController : public ASCPlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRelationshipChanged, AActor*, _shifter, AActor*, _shiftTarget, ERelationshipTypes, previousRelation, ERelationshipTypes, _eNewRelation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FProgressUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FProgressionRewardUnlocked, ECharacterProgressionRewardTypes, _eRewardType, const FCharacterProgressionReward&, _reward, UCharacterProgressionUnlockDB*, _unlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnInitializedDynamic, AFightingCharacter*, _pawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWasKilled, AFightingCharacter*, _victim, AFightingCharacter*, _deathInstigator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptionChangedDynamicDelegate, EGameOptionTypes, eGameOptionType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAFKWarningActivated, bool, _bActivated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropItem, AController*, _discarder);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurrentMenuChanged, EMenuEnum, _ePrevMenu, EMenuEnum, _eNewMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCloseIngameMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeMenuPage, ECycleDirection, _eDirection);
    
    UPROPERTY(BlueprintAssignable)
    FOnOptionChangedDynamicDelegate OnOptionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCurrentMenuChanged OnCurrentMenuChanged;
    
    UPROPERTY(BlueprintAssignable)
    FProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FInteractionTextStruct m_InteractionText;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText m_InteractionLockText;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool m_InteractionUseLockText;
    
    UPROPERTY(BlueprintReadWrite)
    ASkillTree* m_MenuSkillTree;
    
    UPROPERTY(EditAnywhere)
    bool m_bShowAltAttackStartQuadrant;
    
    UPROPERTY(BlueprintAssignable)
    FDropItem DropItemDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FChangeMenuPage OnChangeMenuPage;
    
    UPROPERTY(BlueprintAssignable)
    FPawnInitializedDynamic OnPawnInitializedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FOnWasKilled OnPawnWasKilled;
    
    UPROPERTY(BlueprintAssignable)
    FCloseIngameMenu OnMenuClosed;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnGiveInitialControlToPlayer;
    
protected:
    UPROPERTY(Replicated, Transient)
    bool m_bEnvDeathRespawn;
    
    UPROPERTY(Transient)
    TArray<UTexture2D*> m_MenuIconCache;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool m_bDebugDisplayAttackLearning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EMenuEnum> m_DisabledMenus;
    
    UPROPERTY(EditAnywhere)
    bool m_bLoadMenusAsync;
    
    UPROPERTY(EditAnywhere)
    bool m_bHideNonInteractableObjectComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UMenuWidget> m_MenuClasses[47];
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUserWidget> m_MenuAnimationsClass;
    
    UPROPERTY(EditAnywhere)
    TArray<EMenuEnum> m_eMenuListPreventingInGameMenu;
    
    UPROPERTY(Export, Transient)
    UMenuWidget* m_MenuInstances[47];
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TArray<FMenuStackInfos> m_MenuStack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_OutlineMaterial;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPopupWidget* m_PopupYesNo;
    
    UPROPERTY(BlueprintAssignable)
    FOnAFKWarningActivated OnAFKWarningActivated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_fTimeSinceLastNonRedundantUserInput;
    
private:
    UPROPERTY(Export, Transient)
    UUserWidget* m_MenuAnimationsInstance;
    
    UPROPERTY(Transient)
    UEquipmentSelectionData* m_EquipmentSelection;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTargetableWidgetUpdaterComponent* m_TagetableWigetUpdaterComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UASMDetectionComponent* m_ASMDetectionComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UWidgetPoolComponent* m_WidgetPoolComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPickUpMenu> m_PickUpMenuClass;
    
    UPROPERTY(EditAnywhere)
    float m_fPreviewTimerHighlight;
    
    UPROPERTY(EditAnywhere)
    float m_fPreviewTimerScrollBox;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUserWidget> m_WaterMarkBP;
    
    UPROPERTY(Export, Transient)
    UUserWidget* m_WaterMarkScreen;
    
    UPROPERTY(Replicated, Transient)
    int32 m_iCharacterLevel;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AInteractiveObject> m_CairnClass;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* m_MaterialParameterCollectionFXVisualParam;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EmissiveMultiplierMPCParameterName;
    
public:
    AFightingPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Exec)
    void ToggleWaterMark();
    
    UFUNCTION(Exec)
    void ToggleInteractionDetectionDebug();
    
    UFUNCTION(Exec)
    void SuicideAll();
    
    UFUNCTION(Exec)
    void Suicide(float _fDelay);
    
    UFUNCTION(Exec)
    void SimulateError(const FString& _error);
    
    UFUNCTION(Exec)
    void SimulateClientReturnToMainMenu(const FString& _reason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowQuadrant(uint8 _uiParam);
    
protected:
    UFUNCTION(Exec)
    void SetOptionValue(FName _optionType, float _fOptionValue);
    
public:
    UFUNCTION(Exec)
    void SetHealth(float _fHP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SessionTimeManagerActivateDebug(bool _bActivate);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUseInterractiveObject(bool _bSuccess, UInteractionObjectComponent* _componentUsed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSuicideAll();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetEnvDeathRespawn(bool _bValue);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSendLocalCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    
public:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerRequestTimeSync(uint8 _uiClientRequestID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerFirstRequestTimeSync(uint8 _uiClientRequestID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDropItem();
    
    UFUNCTION(Exec)
    void RemovePlayer();
    
private:
    UFUNCTION()
    void PawnDestructionOver(AActor* _destroyedActor);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 uiNewIndex);
    
protected:
    UFUNCTION()
    void OnPlayerProgressionUpdated();
    
    UFUNCTION()
    void OnPlayerNotifyProgressionRewardUnlocked(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, UCharacterProgressionUnlockDB* _unlock);
    
public:
    UFUNCTION()
    void OnPickUpDestroyed(UInteractionObjectComponent* _component);
    
protected:
    UFUNCTION()
    void OnPawnDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    
private:
    UFUNCTION()
    void OnNeedUpdateFromGameUserSettings();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboLastAttack(EQuadrantTypes newQuadrant);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboChangedQuadrant(EQuadrantTypes oldQuadrant);
    
    UFUNCTION()
    void OnCharacterInteractionObjectChanged(UInteractionObjectComponent* _objectComp, bool _bNewComp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAltAttack(EQuadrantTypes newQuadrant, uint8 _uiCurrentComboIndex);
    
    UFUNCTION(Exec)
    void Mute(bool bMute);
    
    UFUNCTION(Exec)
    void GiveFocusToGameViewport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceCameraOffsetAt(bool _bActivate, float _fRatio);
    
    UFUNCTION(Exec)
    void DumpPlayerInfo();
    
    UFUNCTION(Exec)
    void DebugToggleFollowPlayer(int32 _iPlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpeedForceZ(bool _bActivate, float _fZValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ComboEnded(EQuadrantTypes newQuadrant);
    
private:
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientSendNewCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientSendEntireCoopGroup(const TArray<FCoopGroup>& _coopGroup, const FCoopGroup& _coopGroupReturnToPVE);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientRespawnLocalAI(AAISpawner* _spawner);
    
    UFUNCTION(Client, Unreliable)
    void ClientRequestTimeSync(uint8 _uiClientRequestID, int64 _serverTimeTicks);
    
    UFUNCTION(Client, Reliable)
    void ClientFirstRequestTimeSync(uint8 _uiClientRequestID, int64 _serverTimeTicks);
    
    UFUNCTION(Client, Reliable)
    void Client_RestartMatch();
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveAllyHeal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckAttackAnimations();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ValidationReceived(bool _bResult);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_UnlockAllEmotes();
    
    UFUNCTION(BlueprintPure)
    bool BPF_ShouldDisplayInteractionText(bool& _bOutCanInteract);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWantsRespawnOnStartPoint(bool _bRespwnOnStartPoint);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_SetEmoteLock(bool _bLock, const FName& _emoteName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmissiveParamOnPawn(float _fParamValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCurrentMenu(EMenuEnum _eMenu);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMenuFromStack(EMenuEnum _eMenu);
    
    UFUNCTION(BlueprintCallable, Exec)
    UMenuWidget* BPF_PushMenu(EMenuEnum _eMenuEnum, UPanelWidget* _container);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopMenuStack(EMenuEnum _eMenuEnum, bool _bIncluded);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopMenu(bool _bRestoreFocus);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsMenuInStack(EMenuEnum _eMenu) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsMenuEnabled(EMenuEnum _eMenu) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsKeyBindedToInputAction(FKey _key, InputAction _eInputAction);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInGameMenuEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    UWidgetPoolComponent* BPF_GetWidgetPoolComponent();
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetWantRespawn() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetVirtualCursorEnabled() const;
    
    UFUNCTION(BlueprintPure)
    UMenuWidget* BPF_GetTopMenuInstance() const;
    
    UFUNCTION(BlueprintPure)
    EMenuEnum BPF_GetTopMenu() const;
    
    UFUNCTION(BlueprintPure)
    UTargetableWidgetUpdaterComponent* BPF_GetTagetableWigetUpdaterComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UPopupWidget* BPF_GetPopupYesNo();
    
    UFUNCTION(BlueprintPure)
    UMenuWidget* BPF_GetParentMenu(EMenuEnum& _eOutMenu, int32 _iOffset) const;
    
    UFUNCTION(BlueprintPure)
    UMenuWidget* BPF_GetOrCreateMenuInstance(EMenuEnum _eMenuEnum);
    
    UFUNCTION(BlueprintPure)
    UMenuWidget* BPF_GetMenuInstance(EMenuEnum _eMenu) const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* BPF_GetMenuAnimations();
    
    UFUNCTION(BlueprintPure)
    float BPF_GetFadeTime() const;
    
    UFUNCTION(BlueprintPure)
    EMenuEnum BPF_GetCurrentMenu() const;
    
    UFUNCTION(BlueprintPure)
    UInteractionObjectComponent* BPF_GetCurrentInteractionObjectComponent() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_EnterSpectatorMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableVirtualCursor(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableInGameMenu();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DismissNewProgressionRewards(ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableInGameMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugForcePerfectLink(bool _bActivate);
    
    UFUNCTION(Exec)
    void BPF_DebugForceAttackQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_DebugAutoTargetAttackTicketAI(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClosePickUpMenu();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearMenuStack();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CacheMenuIcons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ActivateHitDetailsDebug(bool _bActivate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_TryQuitBadCombo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ToggleDebugMenu();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_ShouldEnablePostProcessComponent() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_RestartAsked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PawnInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnUsedHealStone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSetInteractiveObjectComponent(UInteractionObjectComponent* _newInteractionObjectComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnReceiveAllyHeal();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnComboEditorClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MenuEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GameInitialized(bool bHideLoadingScreen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ChangeEditorQuadrantState(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BakeAttackAnimations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateHitIgnorance(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateCameraAimDebug(bool _bActivate);
    
};

