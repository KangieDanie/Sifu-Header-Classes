#pragma once
#include "CoreMinimal.h"
#include "OpenColorIOColorConversionSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OpenColorIOBlueprintLibrary.generated.h"

class UTexture;
class UObject;
class UTextureRenderTarget2D;

UCLASS(BlueprintType, MinimalAPI)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOpenColorIOBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ApplyColorSpaceTransform(const UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget);
    
};

