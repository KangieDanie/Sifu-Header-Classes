#pragma once
#include "CoreMinimal.h"
#include "OpenColorIOColorConversionSettings.h"
#include "OpenColorIODisplayConfiguration.generated.h"

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIODisplayConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOpenColorIOColorConversionSettings ColorConfiguration;
    
    FOpenColorIODisplayConfiguration();
};

