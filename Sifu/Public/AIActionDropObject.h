#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIActionDropObject.generated.h"

UCLASS()
class SIFU_API UAIActionDropObject : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector m_vDropImpulse;
    
    UAIActionDropObject();
    UFUNCTION(BlueprintCallable)
    void BPF_DropObjectInHand();
    
};

