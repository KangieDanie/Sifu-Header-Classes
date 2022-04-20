#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SmartName -FallbackName=SmartName
#include "SCPoseAssetSelection.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCPoseAssetSelection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSmartName m_PoseName;
    
    UPROPERTY(EditAnywhere)
    float m_fWeight;
    
    FSCPoseAssetSelection();
};

