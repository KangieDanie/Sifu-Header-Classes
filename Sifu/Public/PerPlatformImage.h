#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Image -FallbackName=Image
#include "PerPlatformWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PerPlatformImage.generated.h"

UCLASS()
class UPerPlatformImage : public UImage, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SmallScreenSize;
    
    UPerPlatformImage();
    UFUNCTION(BlueprintCallable)
    void RefreshGUIs();
    
    
    // Fix for true pure virtual functions not being implemented
};

