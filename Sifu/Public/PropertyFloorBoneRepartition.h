#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PropertyFloorBoneRepartition.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPropertyFloorBoneRepartition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference m_Bone;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_DegreeFloorAngleRange;
    
    UPROPERTY(EditAnywhere)
    float m_fRepartitionAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fResultAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform m_BoneResultTransform;
    
    FPropertyFloorBoneRepartition();
};

