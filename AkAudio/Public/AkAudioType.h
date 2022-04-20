#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkAudioType.generated.h"

UCLASS()
class AKAUDIO_API UAkAudioType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    uint32 ShortID;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> UserData;
    
    UAkAudioType();
};

