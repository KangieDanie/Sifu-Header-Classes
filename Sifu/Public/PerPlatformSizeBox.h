#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=SizeBox -FallbackName=SizeBox
#include "PerPlatformWidget.h"
#include "PerPlatformSizeBox.generated.h"

UCLASS()
class UPerPlatformSizeBox : public USizeBox, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NormalWidthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmallScreenWidthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NormalHeightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmallScreenHeightOverride;
    
    UPerPlatformSizeBox();
    
    // Fix for true pure virtual functions not being implemented
};

