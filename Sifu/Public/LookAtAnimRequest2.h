#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AimOffsetStruct.h"
#include "LookAtAnimRequest2.generated.h"

class UPlayerAnim;

UCLASS(Abstract, Blueprintable)
class SIFU_API ULookAtAnimRequest2 : public UObject {
    GENERATED_BODY()
public:
    ULookAtAnimRequest2();
    UFUNCTION(BlueprintImplementableEvent)
    FAimOffsetStruct BPE_GetLookAtAimOffset(UPlayerAnim* _animInstance) const;
    
};

