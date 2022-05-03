#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CameraTransitionInfoPairStruct.h"
#include "CameraDataModifierWithBehavior.h"
#include "AbstractCameraData.generated.h"

class UCameraTransitionInfo;

UCLASS(Abstract)
class SIFU_API UAbstractCameraData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCameraTransitionInfo* m_DefaultCameraTransition;
    
    UPROPERTY(EditAnywhere)
    TArray<FCameraTransitionInfoPairStruct> m_CameraTransitionDB;
    
    UPROPERTY(EditAnywhere)
    UCameraTransitionInfo* m_OutCameraTransition;
    
    UPROPERTY(EditAnywhere)
    TArray<FCameraDataModifierWithBehavior> m_Modifiers;
    
public:
    UAbstractCameraData();
protected:
    UFUNCTION()
    void ClearTransitions();
    
};

