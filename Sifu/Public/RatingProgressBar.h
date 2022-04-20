#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
#include "RatingProgressBar.generated.h"

UCLASS()
class URatingProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iImageCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iSteps;
    
    URatingProgressBar();
};

