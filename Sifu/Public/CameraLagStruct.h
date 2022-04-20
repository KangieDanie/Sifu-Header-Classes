#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "CameraLagStruct.generated.h"

UCLASS()
class SIFU_API UCameraLagStruct : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bEnableInputLag;
    
    UPROPERTY(EditAnywhere)
    float m_fInputLagGlobalMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_fInputLagGlobalMultiplierMax;
    
    UPROPERTY(EditAnywhere)
    float m_fInputLagGlobalMultiplierMin;
    
    UPROPERTY(EditAnywhere)
    float m_fInputLagMouseMultiplier;
    
    UPROPERTY(EditAnywhere)
    FVector2D m_vInputLagProportionnalIncrementFadeIn;
    
    UPROPERTY(EditAnywhere)
    FVector2D m_vInputLagConstantIncrementFadeIn;
    
    UPROPERTY(EditAnywhere)
    FVector2D m_vInputLagProportionnalIncrementFadeOut;
    
    UPROPERTY(EditAnywhere)
    FVector2D m_vInputLagConstantIncrementFadeOut;
    
    UCameraLagStruct();
};

