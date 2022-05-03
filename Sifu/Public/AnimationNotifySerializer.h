#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SCAnimNotifyExtraInfo.h"
#include "AnimationNotifySerializer.generated.h"

UCLASS(BlueprintType)
class UAnimationNotifySerializer : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationNotifySerializer();
    UFUNCTION(BlueprintCallable)
    static FSCAnimNotifyExtraInfo BPF_ReadNotifyExtraInfoFromBufferArray(const TArray<uint8>& _extraInfoBufferArray);
    
};

