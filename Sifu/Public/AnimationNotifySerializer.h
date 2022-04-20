#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyExtraInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimationNotifySerializer.generated.h"

UCLASS(BlueprintType)
class UAnimationNotifySerializer : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationNotifySerializer();
    UFUNCTION(BlueprintCallable)
    static FSCAnimNotifyExtraInfo BPF_ReadNotifyExtraInfoFromBufferArray(const TArray<uint8>& _extraInfoBufferArray);
    
};

