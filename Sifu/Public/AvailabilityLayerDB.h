#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AvailabilityLayerDB.generated.h"

class UAvailabilityKeyValuePair;
class UAvailabilityLayerData;

UCLASS()
class SIFU_API UAvailabilityLayerDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UAvailabilityKeyValuePair*> m_pairs;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_defaultLayerData;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_NoActionLayerData;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_NothingLayerData;
    
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_FallLayerData;
    
    UAvailabilityLayerDB();
};

