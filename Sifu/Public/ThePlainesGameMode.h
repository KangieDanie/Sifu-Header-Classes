#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCGameMode -FallbackName=SCGameMode
#include "DamageInfos.h"
#include "EFightingState.h"
#include "ThePlainesGameMode.generated.h"

class AController;
class APlayerController;

UCLASS(NonTransient)
class SIFU_API AThePlainesGameMode : public ASCGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTwoControllersDynamicDelegate, AController*, _killer, AController*, _victim, const FDamageInfos&, _damageInfos);
    
    UPROPERTY(BlueprintAssignable)
    FTwoControllersDynamicDelegate OnCharacterKilled;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_ForcedPlayerStart;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_fGMDamageMultiplier;
    
public:
    AThePlainesGameMode();
    UFUNCTION(Exec)
    void KillAllAis();
    
    UFUNCTION(BlueprintPure)
    TArray<APlayerController*> BPF_GetPlayers();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceRestartPlayerAtStartNull(AController* _controller);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_IsStartupGameMode() const;
    
    UFUNCTION(Exec)
    void AllAisSetFightingState(EFightingState _eFightingState, float _fDuration);
    
};

