#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "VariableWeightLayerToBoneMask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCBlendType -FallbackName=ESCBlendType
#include "VariableWeightInfo.h"
#include "SCAnimNode_SetVariableWeightLayers.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_SetVariableWeightLayers : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVariableWeightLayerToBoneMask> mVariableWeightLayerToBoneMaskRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVariableWeightInfo mVariableWeightLayerToBoneMaskFromOrderDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVariableWeightLayerToBoneMask> mFillerLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVariableWeightLayerToBoneMask> mVariableWeightLayerToBoneMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float mBlendTimeWhenSwitchingProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESCBlendType mBlendModeWhenSwitchingProfile;
    
private:
    UPROPERTY()
    TArray<FVariableWeightLayerToBoneMask> m_PrevVariableWeightLayerToBoneMaskRuntime;
    
public:
    FSCAnimNode_SetVariableWeightLayers();
};

