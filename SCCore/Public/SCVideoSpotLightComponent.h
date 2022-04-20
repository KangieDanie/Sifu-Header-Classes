#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpotLightComponent -FallbackName=SpotLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SCVideoSpotLightComponent.generated.h"

class UMediaTexture;
class UCurveLinearColor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCVideoSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_FilterAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMediaTexture* m_MediaTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLengthInSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* m_ColourCurve;
    
    USCVideoSpotLightComponent();
    UFUNCTION()
    void OnMediaOpen(const FString& _openedUrl);
    
};

