#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkAssetData.generated.h"

UCLASS()
class AKAUDIO_API UAkAssetData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 CachedHash;
    
    UAkAssetData();
};

