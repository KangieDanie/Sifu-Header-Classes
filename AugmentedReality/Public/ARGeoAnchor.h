#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
#include "EARAltitudeSource.h"
#include "ARGeoAnchor.generated.h"

UCLASS()
class AUGMENTEDREALITY_API UARGeoAnchor : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UARGeoAnchor();
    UFUNCTION(BlueprintPure)
    float GetLongitude() const;
    
    UFUNCTION(BlueprintPure)
    float GetLatitude() const;
    
    UFUNCTION(BlueprintPure)
    EARAltitudeSource GetAltitudeSource() const;
    
    UFUNCTION(BlueprintPure)
    float GetAltitudeMeters() const;
    
};

