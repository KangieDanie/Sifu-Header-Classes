#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCCheatManager.generated.h"

class UCheatDB;
class UGameInstance;

UCLASS(BlueprintType)
class SIFU_API USCCheatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UCheatDB* m_cheatDB;
    
public:
    USCCheatManager();
    UFUNCTION(BlueprintPure)
    static bool SkipMovesetTutorial(UGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintPure)
    static bool FillInventoryWithEquipment(UGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintPure)
    static bool AreAllAttacksUnlocked(UGameInstance* _gameInstance);
    
};

