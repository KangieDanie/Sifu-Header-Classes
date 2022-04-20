#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkAssetPlatformData.generated.h"

class UAkAssetData;

UCLASS()
class AKAUDIO_API UAkAssetPlatformData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAkAssetData* CurrentAssetData;
    
    UAkAssetPlatformData();
};

