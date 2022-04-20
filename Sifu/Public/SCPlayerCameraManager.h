#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TViewTarget -FallbackName=TViewTarget
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "SCPlayerCameraManager.generated.h"

UCLASS(NonTransient)
class SIFU_API ASCPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FTViewTarget> m_ForcedViewTargetToUpdateUnderneath;
    
public:
    ASCPlayerCameraManager();
};

