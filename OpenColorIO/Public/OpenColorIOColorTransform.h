#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OpenColorIOColorTransform.generated.h"

class UOpenColorIOConfiguration;

UCLASS()
class OPENCOLORIO_API UOpenColorIOColorTransform : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOpenColorIOConfiguration* ConfigurationOwner;
    
    UPROPERTY(VisibleAnywhere)
    FString SourceColorSpace;
    
    UPROPERTY(VisibleAnywhere)
    FString DestinationColorSpace;
    
    UOpenColorIOColorTransform();
};

