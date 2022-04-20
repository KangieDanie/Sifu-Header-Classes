#pragma once
#include "CoreMinimal.h"
#include "OpenColorIOColorSpace.h"
#include "OpenColorIOColorConversionSettings.generated.h"

class UOpenColorIOConfiguration;

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIOColorConversionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UOpenColorIOConfiguration* ConfigurationSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOpenColorIOColorSpace SourceColorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOpenColorIOColorSpace DestinationColorSpace;
    
    FOpenColorIOColorConversionSettings();
};

