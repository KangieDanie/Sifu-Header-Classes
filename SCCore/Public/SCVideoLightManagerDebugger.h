#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SCVideoLightManagerDebugger.generated.h"

class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USCVideoLightManagerDebugger : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTextureRenderTarget2D* m_currentRT;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;
    
    USCVideoLightManagerDebugger();
};

