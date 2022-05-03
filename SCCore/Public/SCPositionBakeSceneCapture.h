#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SCPositionBakeSceneCapture.generated.h"

class UMaterialInterface;
class USCCaptureComponent2D;
class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;

UCLASS()
class SCCORE_API ASCPositionBakeSceneCapture : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USCCaptureComponent2D* m_SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iDebugSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iBakedPositionTextureSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_BakedLocalPositionDrawer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_BakedPreSkinnedPositionDrawer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMinusZDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_MinusZDistanceParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_TextureSizeParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_BoundsMinParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_BoundsMaxParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_ChannelUVParameterName;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* m_BakedPositionTextureTarget;
    
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_BakedLocalPositionDrawerInstanceDynamic;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_BakedPreSkinnedPositionDrawerInstanceDynamic;
    
public:
    ASCPositionBakeSceneCapture();
};

