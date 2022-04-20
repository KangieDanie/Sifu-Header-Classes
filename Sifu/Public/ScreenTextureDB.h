#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ScreenTextureData.h"
#include "ScreenTextureDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UScreenTextureDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FScreenTextureData> m_ScreenTextures;
    
    UScreenTextureDB();
};

