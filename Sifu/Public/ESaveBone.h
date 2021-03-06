#pragma once
#include "CoreMinimal.h"
#include "ESaveBone.generated.h"

UENUM(BlueprintType)
enum class ESaveBone : uint8 {
    Attack1_LeftLeg,
    Attack1_RightLeg,
    Attack2_LeftLeg,
    Attack2_RightLeg,
    LookAt_Head,
    LockMove_foot_l,
    LockMove_foot_r,
    LockMove_Spine_01,
    LookAt_Spine_01,
    LookAt_Spine_02,
    LookAt_Spine_03,
    LookAt_Root,
    UpperBody_Spine_01,
    UpperBody_Spine_03,
    UpperBody_Spine_02,
    Master_Pelvis,
    UpperBody_Pelvis,
    Master_Foot_L,
    Master_Foot_R,
    LeanSpine_1,
    LeanSpine_2,
    LeanSpine_3,
    Landing_Foot_L,
    Landing_Foot_R,
    Custom_1,
    Custom_2,
    Custom_3,
    Custom_4,
    Custom_5,
    Custom_6,
    Custom_7,
    Custom_8,
    Custom_9,
    Custom_10,
    Custom_11,
    Custom_12,
    Custom_13,
    Custom_14,
    Custom_15,
    Count,
};

