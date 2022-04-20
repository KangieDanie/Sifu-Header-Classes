#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkAssetDataSwitchContainerData.generated.h"

class UAkGroupValue;
class UAkMediaAsset;
class UAkAssetDataSwitchContainerData;

UCLASS(EditInlineNew)
class AKAUDIO_API UAkAssetDataSwitchContainerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UAkGroupValue> GroupValue;
    
    UPROPERTY(VisibleAnywhere)
    UAkGroupValue* DefaultGroupValue;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UAkMediaAsset*> MediaList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UAkAssetDataSwitchContainerData*> Children;
    
    UAkAssetDataSwitchContainerData();
};

