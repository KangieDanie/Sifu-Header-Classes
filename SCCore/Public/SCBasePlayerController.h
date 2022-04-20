#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
#include "SCBasePlayerController.generated.h"

UCLASS()
class SCCORE_API ASCBasePlayerController : public APlayerController, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    ASCBasePlayerController();
    
    // Fix for true pure virtual functions not being implemented
};

