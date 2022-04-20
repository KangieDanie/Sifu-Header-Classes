#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SCCaptureComponent2D.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    USCCaptureComponent2D();
    UFUNCTION(BlueprintCallable)
    bool BPF_ProjectWorldLocationToPixelCoordinates(const FVector& _vLocation, FVector2D& _vOutPixelLocation, FVector2D& _vOutUvLocation);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ProjectMultipleWorldLocationsToPixelCoordinates(const TArray<FVector>& _Locations, TArray<FVector2D>& _OutPixelLocations, TArray<FVector2D>& _OutUvLocations, TArray<bool>& _OutbAreLocationsInCanvas);
    
};

