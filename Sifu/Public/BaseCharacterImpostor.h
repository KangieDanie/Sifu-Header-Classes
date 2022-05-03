#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCCharacterImpostor -FallbackName=SCCharacterImpostor
#include "ESCSignificanceBuckets.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkExternalSourceInfo -FallbackName=AkExternalSourceInfo
#include "BaseCharacterImpostor.generated.h"

class UCurveFloat;
class UAkAudioEvent;
class UAkRtpc;

UCLASS()
class SIFU_API ABaseCharacterImpostor : public ASCCharacterImpostor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ESCSignificanceBuckets m_eMoanMinBucket;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* m_MoanEvent;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAkExternalSourceInfo> m_MoanExternalSourceInfos;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* m_MoanIntensityRTPC;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MoanIntensityRTPCName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoanInterpolationInMs;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AngleFromCameraForwardRemappingCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MoanRefBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoanIntensityThresold;
    
public:
    ABaseCharacterImpostor();
};

