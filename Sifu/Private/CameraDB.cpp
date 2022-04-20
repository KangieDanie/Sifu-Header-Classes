#include "CameraDB.h"

UCameraDB::UCameraDB() {
    this->m_BehaviorTreeAsset = NULL;
    this->m_CameraDataDefault = NULL;
    this->m_fUnlockOnPlaceCompensationTime = 1.00f;
    this->m_OrientationDampingFromDistanceCurve = NULL;
    this->m_NearOrientationDampingFromDistanceCurve = NULL;
    this->m_OrientationDampingCurveRatioFromDist = NULL;
    this->m_PitchDampingFromDistanceCurve = NULL;
    this->m_PitchNearOrientationDampingFromDistanceCurve = NULL;
    this->m_PitchOrientationDampingCurveRatioFromDist = NULL;
    this->m_fLockManualControlCooldownDuration = 1.00f;
    this->m_weightFromDistCurve = NULL;
    this->m_fLookAtDurationUnderneathSequence = 0.20f;
    this->m_uiTargetableBehaviorMask = 12;
    this->m_LockFollowYawDampingFactorByAngleDelta = NULL;
    this->m_followingYawDampingFactorFromVelocity = NULL;
    this->m_fLockFollowingDampingInCollision = 0.60f;
    this->m_fLockFollowingCollisionAngleOffset = 40.00f;
    this->m_fLockFollowingPitchMultiplier = 1.00f;
    this->m_fLockFollowingPitchOffset = -20.00f;
    this->m_fLockFollowingPitchDampingFactor = 1.00f;
    this->m_fLockFollowingMaxAngleToResume = 35.00f;
    this->m_fLockFollowingMinDeltaCamPlayerToFreezeOrientation = 180.00f;
    this->m_fLockFollowingMinDeltaCamPlayerToFreezeOrientationNoInput = 40.00f;
    this->m_fLockFollowingMinDeltaInputToUnfreezeOrientation = 25.00f;
    this->m_fLockFollowingRotationChangeThreshold = 180.00f;
    this->m_bLockFollowingResumeIfNoInput = true;
    this->m_fLockFollowingManualControlCooldownDuration = 2.00f;
    this->m_fLockFramingAimZOffset = 70.00f;
    this->m_fDurationAfterManualControlToGetBackToRegularPos = 3.00f;
    this->m_fSpringSpeedFactorForCameraPosition = 4.00f;
    this->m_fOffsetAngleToGetOutOfCollisionFromDeadZone = 20.00f;
    this->m_uiCameraPoolNumber[0] = 15;
    this->m_uiCameraPoolNumber[1] = 15;
    this->m_uiCameraPoolNumber[2] = 15;
    this->m_uiCameraPoolNumber[3] = 15;
    this->m_DefaultTransition = NULL;
    this->m_fCollisionDampingFactor = 2.40f;
    this->m_fCollisionSphereMarginFactor = 1.10f;
    this->m_fSoftCollisionDistanceAllowedInsideWall = 0.00f;
    this->m_fCollisionDeadEndAngle = 180.00f;
    this->m_iDetectionRaycastCount = 8;
    this->m_fCollisionDetectionDistance = 800.00f;
    this->m_maxRaycastDistCoeffByMinDist = NULL;
    this->m_fRaycastStartZOffset = 0.00f;
    this->m_fRaycastAngle = 0.00f;
    this->m_fFalsePositiveSafeZoneMaxAngle = 30.00f;
    this->m_bUseSpringForReturningToFurtherCollision = false;
    this->m_fSpringSpeedForReturningToFurtherCollision = 15.00f;
    this->m_bEnableSafePoint = false;
    this->m_safePointRatioFromDeadZoneMinDist = NULL;
    this->m_fSafePointDampingSpeed = 6.50f;
    this->m_fSafePointBlendOutDuration = 1.00f;
    this->m_fRepulsionAngleDiffToBeConsideredInsideSafeZone = 45.00f;
    this->m_fRepulsionTargetAngleDiffMax = 70.00f;
    this->m_fFulcrumOffsetDampingFactorEnabled = 10.00f;
    this->m_fFulcrumOffsetDampingFactorDisabled = 10.00f;
    this->m_fFulcrumOffsetRatioToMaxDistByBissectorRatio = NULL;
    this->m_fFulcrumOffsetDistanceRatioOutside = 1.00f;
    this->m_bFulcrumOffsetOrientateCamera = false;
    this->m_fFulcrumOffsetCameraOrientationBlendDuration = 1.00f;
    this->m_fFulcrumOffsetMaxDistance = 150.00f;
    this->m_fFollowRotationChangeThreshold = 120.00f;
    this->m_followingPitchMulitplierFromDeltaYaw = NULL;
    this->m_fMinDeltaCamPlayerToFreezeOrientation = 120.00f;
    this->m_fMinDeltaInputToUnfreezeOrientation = 25.00f;
    this->m_fCooldownReturnToRestAfterLookAtWithPitch = 1.00f;
    this->m_SideTraceDistRatioRemap = NULL;
    this->m_BothSideColRatioRemap = NULL;
    this->m_fSideTraceMirrorCursorAvoidRangeAroundMiddle = 0.20f;
    this->m_fCollisionSideSpeedFactorGoingOpposite = 4.00f;
    this->m_fCollisionSideSpeedFactorGoingOnTheSameSide = 3.00f;
    this->m_fMaxTargetDistanceToBeConsideredByMirrorFar = 300.00f;
    this->m_fMirrorDistSideMax = 200.00f;
    this->m_fMirrorFarExtraDistanceInPushedState = 500.00f;
    this->m_fMirrorFarExtraDistanceInDownState = 175.00f;
    this->m_fMeleeAngleToUseCamForwardDirToTargetToChangeMirror = 20.00f;
    this->m_AnimDrivenWeightForCollisionDistance = NULL;
    this->m_AnimDrivenWeightFactorForAnimRatio = NULL;
    this->m_AnimDrivenWeightByAngularDistance = NULL;
    this->m_fAnimDrivenWeightRepartitionBetweenCollisionAndAngularDist = 0.60f;
    this->m_AnimDrivenWeightByDistance = NULL;
    this->m_fAnimDrivenWeightRepartitionBetweenCollisionAndDist = 0.60f;
    this->m_eAnimDrivenRootCheckCollisionChannel = ECC_Pawn;
}
