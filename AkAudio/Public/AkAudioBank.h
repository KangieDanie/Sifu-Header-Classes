#pragma once
#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkAudioBank.generated.h"

class UAkAudioEvent;
class UAkAssetPlatformData;

UCLASS(BlueprintType)
class AKAUDIO_API UAkAudioBank : public UAkAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoLoad;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;
    
    UPROPERTY(VisibleAnywhere)
    TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsLocalized;
    
private:
    UPROPERTY(Transient)
    UAkAssetPlatformData* CurrentLocalizedPlatformAssetData;
    
public:
    UAkAudioBank();
};

