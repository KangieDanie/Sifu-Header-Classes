#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretch -FallbackName=EStretch
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScaleBox -FallbackName=ScaleBox
#include "PerPlatformWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretchDirection -FallbackName=EStretchDirection
#include "PerPlatformScaleBox.generated.h"

UCLASS()
class UPerPlatformScaleBox : public UScaleBox, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretch::Type> NormalStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretch::Type> SmallScreenStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretchDirection::Type> NormalStretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStretchDirection::Type> SmallScreenStretchDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalUserSpecifiedScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmallScreenUserSpecifiedScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NormalIgnoreInheritedScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SmallScreenIgnoreInheritedScale;
    
    UPerPlatformScaleBox();
    
    // Fix for true pure virtual functions not being implemented
};

