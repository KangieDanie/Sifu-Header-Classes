#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ReplayKeyWidgetVisualData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FReplayKeyWidgetVisualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_Texture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D m_vSize;
    
    SIFU_API FReplayKeyWidgetVisualData();
};

