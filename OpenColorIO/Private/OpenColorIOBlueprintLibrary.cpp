#include "OpenColorIOBlueprintLibrary.h"

class UTextureRenderTarget2D;
class UTexture;
class UObject;

bool UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(const UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget) {
    return false;
}

UOpenColorIOBlueprintLibrary::UOpenColorIOBlueprintLibrary() {
}

