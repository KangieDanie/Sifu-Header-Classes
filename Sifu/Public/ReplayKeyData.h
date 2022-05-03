#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataCameraTransitionOverrideSettings.h"
#include "EReplayKeyTransition.h"
#include "EReplayKeyCameraMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ReplayKeyCutData.h"
#include "ReplayKeyDataCameraSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "ReplayKeyData.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SkipSerialization)
    int32 m_iKeyIndex;
    
    UPROPERTY(BlueprintReadOnly, SkipSerialization)
    int32 m_iKeyFrameIndex;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fTime;
    
    UPROPERTY(BlueprintReadOnly, SkipSerialization)
    float m_fDilatedTime;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fTimeDilation;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_eTypeFlags;
    
    UPROPERTY(BlueprintReadWrite)
    EReplayKeyTransition m_eTransition;
    
    UPROPERTY(BlueprintReadWrite)
    EReplayKeyCameraMode m_eCameraMode;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vCameraLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat m_qCameraRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataCameraTransitionOverrideSettings m_CameraTransformSettings;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyDataCameraSettings m_CameraSettings;
    
    UPROPERTY(BlueprintReadWrite)
    FReplayKeyCutData m_CutData;
    
    SIFU_API FReplayKeyData();
};

