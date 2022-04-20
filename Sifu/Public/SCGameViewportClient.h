#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "SCGameViewportClient.generated.h"

UCLASS(NonTransient)
class SIFU_API USCGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USCGameViewportClient();
};

