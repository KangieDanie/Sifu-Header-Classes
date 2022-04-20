#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ControllerKeyIcons.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SIFU_API FControllerKeyIcons {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey m_Key;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_Icons[3];
    
    UPROPERTY(EditAnywhere)
    bool m_bShowText;
    
    UPROPERTY(EditAnywhere)
    FText m_ReplacementText;
    
    FControllerKeyIcons();
};

