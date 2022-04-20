#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AimOffsetStruct.h"
#include "LookAtLocomotionLimits.h"
#include "LookAtConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ELookAtApplyMode -FallbackName=ELookAtApplyMode
#include "ELookAtRefDirMode.h"
#include "ELookAtTargetType.h"
#include "LookAtModifierParams.h"
#include "LookAtLimits.h"
#include "ETransitionGlobalType.h"
#include "LookAtAnimHandler.generated.h"

class ULookAtAnimRequest2;

USTRUCT(BlueprintType)
struct SIFU_API FLookAtAnimHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAimOffsetStruct m_aimOffset0;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAimOffsetStruct m_aimOffset1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 m_iAimOffsetIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bLookAtEnabled;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D m_vRawBlendSpaceParams;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D m_vBlendSpaceParams;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D m_vEyeBlendSpaceParams;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator m_BoneModifierRot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator m_CompensationRot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bIsTargetLocationValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vTargetLocation;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableAnimationCompensation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHeadDiffYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHeadDiffPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_headInWorldSpaceSaveBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_headComparaisonInWorldSpaceSaveBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_headInWorldSpacePostLookAtSaveBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bEyesLookAtSpecificBone;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_EyesLookAtSpecificBoneName;
    
    UPROPERTY(BlueprintReadOnly)
    ELookAtApplyMode m_eApplyMode;
    
    UPROPERTY(BlueprintReadOnly)
    ELookAtRefDirMode m_eRefDirMode;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_fAngleThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxFrontAngle;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bLookInCameraDir;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ULookAtAnimRequest2> m_animRequest;
    
    UPROPERTY(EditDefaultsOnly)
    FLookAtConfig m_lookAtConfigs[5];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ELookAtTargetType> m_targetPriorities;
    
    UPROPERTY(EditDefaultsOnly)
    FLookAtModifierParams m_defaultModifierParams;
    
    UPROPERTY(EditDefaultsOnly)
    FLookAtLimits m_boneModifierLimits;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bInverseValuesOnBoneModifier;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_vBoneModifierOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_vBoneModifierMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FLookAtLimits m_defaultLimits;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FLookAtLocomotionLimits> m_locomotionLimits;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ETransitionGlobalType, FLookAtLimits> m_transitionLimits;
    
    UPROPERTY(EditDefaultsOnly)
    FLookAtModifierParams m_friendlyModifierParams;
    
    UPROPERTY(EditDefaultsOnly)
    FLookAtModifierParams m_hostileInIdleModifierParams;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_uiFirstLocalPlayerAIBehavior;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDistFromFirstLocalPlayer;
    
public:
    FLookAtAnimHandler();
};

