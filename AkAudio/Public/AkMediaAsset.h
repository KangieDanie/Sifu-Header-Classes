#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS()
class AKAUDIO_API UAkMediaAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    bool AutoLoad;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> UserData;
    
private:
    UPROPERTY(Transient)
    UAkMediaAssetData* CurrentMediaAssetData;
    
public:
    UAkMediaAsset();
};

