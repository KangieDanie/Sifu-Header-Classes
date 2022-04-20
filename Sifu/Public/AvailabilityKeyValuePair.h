#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EFightingActionState.h"
#include "AvailabilityKeyValuePair.generated.h"

class UAvailabilityLayerData;

UCLASS()
class SIFU_API UAvailabilityKeyValuePair : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFightingActionState m_eFightingActionState;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_Data;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideAllLayers;
    
    UAvailabilityKeyValuePair();
};

