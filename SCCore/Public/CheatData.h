#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CheatData.generated.h"

class UGameInstance;
class APlayerController;

UCLASS(Blueprintable)
class SCCORE_API UCheatData : public UObject {
    GENERATED_BODY()
public:
    UCheatData();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCheatDeactivated(APlayerController* _playerController) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCheatActivated(APlayerController* _playerController) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_CanApplyCheat(UGameInstance* _gameInstance, APlayerController* _playerController) const;
    
};

