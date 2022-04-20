#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CameraBearerInterface.generated.h"

UINTERFACE(Blueprintable)
class SIFU_API UCameraBearerInterface : public UInterface {
    GENERATED_BODY()
};

class SIFU_API ICameraBearerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetActorRefTransform(float _fDt);
    
};

