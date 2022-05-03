#pragma once
#include "CoreMinimal.h"
#include "HandPoseBlendStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "HandPoseDB.generated.h"

class UAnimSequence;

UCLASS()
class SIFU_API UHandPoseDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHandPoseBlendStruct m_BlendInStruct[4];
    
    UPROPERTY(EditAnywhere)
    FHandPoseBlendStruct m_BlendOutStruct[10];
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_Anims[4];
    
    UHandPoseDB();
};

