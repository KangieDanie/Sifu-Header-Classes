#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ControllerAxisTypeIcons.h"
#include "ControllerAxisIcons.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FControllerAxisIcons {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    FControllerAxisTypeIcons m_AxisIcons[3];
    
    UPROPERTY(EditAnywhere)
    bool m_bShowText;
    
    UPROPERTY(EditAnywhere)
    FText m_ReplacementText;
    
    FControllerAxisIcons();
};

