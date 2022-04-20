#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CheatDB.generated.h"

UCLASS()
class SIFU_API UCheatDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bAllAttacksUnlocked;
    
    UPROPERTY(EditAnywhere)
    bool m_bSkipMovesetTutorial;
    
    UPROPERTY(EditAnywhere)
    bool m_bFillInventoryWithEquipment;
    
    UCheatDB();
};

