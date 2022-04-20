#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "SCAnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "IKProfileBlendInfos.h"
#include "IKProfileAnimNotifyState.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API UIKProfileAnimNotifyState : public USCAnimNotifyState, public IBoneReferenceContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_Profile;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_CrossFadeOutWithProfile;
    
    UPROPERTY(EditAnywhere)
    FIKProfileBlendInfos m_BoneLocationBlend;
    
    UPROPERTY(EditAnywhere)
    FIKProfileBlendInfos m_LimbRotationBlend;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ImpactTime;
    
    UPROPERTY(EditAnywhere)
    FBoneReference m_TargetBoneReference;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetIKAlphaOnStop;
    
    UPROPERTY(EditAnywhere)
    bool m_bRotateImpactOrientation;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceBoneRotation;
    
    UPROPERTY(EditAnywhere)
    float m_fForceBoneRotationBlendDuration;
    
    UIKProfileAnimNotifyState();
    
    // Fix for true pure virtual functions not being implemented
};

