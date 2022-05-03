#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "EnvironmentalAttackDetectionDB.generated.h"

class UTakedownAnimRequest;

UCLASS()
class SIFU_API UEnvironmentalAttackDetectionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTakedownAnimRequest> m_DefaultAnimRequest;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTakedownAnimRequest> m_WallAnimRequest;
    
    UPROPERTY(EditAnywhere)
    float m_fDetectionRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;
    
    UEnvironmentalAttackDetectionDB();
};

