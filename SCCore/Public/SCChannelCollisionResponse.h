#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "SCChannelCollisionResponse.generated.h"

USTRUCT(BlueprintType)
struct FSCChannelCollisionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionResponse> m_eCollisionResponse;
    
    SCCORE_API FSCChannelCollisionResponse();
};

