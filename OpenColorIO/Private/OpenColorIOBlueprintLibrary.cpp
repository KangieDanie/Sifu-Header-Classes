#include "OpenColorIOBlueprintLibrary.h"

class UTexture;
class UObject;
class UTextureRenderTarget2D;

bool UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(const UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget) {
    return false;
}

UOpenColorIOBlueprintLibrary::UOpenColorIOBlueprintLibrary() {
}

