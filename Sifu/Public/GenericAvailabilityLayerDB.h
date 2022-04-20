#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EALBinaryOperation.h"
#include "GenericAvailabilityLayerDB.generated.h"

class UAvailabilityLayerData;

UCLASS(BlueprintType)
class SIFU_API UGenericAvailabilityLayerDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eALBinaryOperation;
    
    UGenericAvailabilityLayerDB();
};

