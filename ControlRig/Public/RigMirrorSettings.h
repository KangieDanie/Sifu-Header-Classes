#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "RigMirrorSettings.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigMirrorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> MirrorAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> AxisToFlip;
    
    UPROPERTY(EditAnywhere)
    FString OldName;
    
    UPROPERTY(EditAnywhere)
    FString NewName;
    
    FRigMirrorSettings();
};

