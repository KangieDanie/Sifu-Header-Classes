#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OpenColorIOColorConversionSettings.h"
#include "OpenColorIOBlueprintLibrary.generated.h"

class UTextureRenderTarget2D;
class UTexture;
class UObject;

UCLASS(BlueprintType, MinimalAPI)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOpenColorIOBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ApplyColorSpaceTransform(const UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget);
    
};

