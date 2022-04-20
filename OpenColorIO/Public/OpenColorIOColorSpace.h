#pragma once
#include "CoreMinimal.h"
#include "OpenColorIOColorSpace.generated.h"

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIOColorSpace {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ColorSpaceName;
    
    UPROPERTY()
    int32 ColorSpaceIndex;
    
    UPROPERTY(VisibleAnywhere)
    FString FamilyName;
    
    FOpenColorIOColorSpace();
};

