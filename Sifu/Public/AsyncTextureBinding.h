#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PropertyBinding -FallbackName=PropertyBinding
#include "AsyncTextureStruct.h"
#include "AsyncTextureBinding.generated.h"

UCLASS()
class SIFU_API UAsyncTextureBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UAsyncTextureBinding();
    UFUNCTION()
    FAsyncTextureStruct GetValue() const;
    
};

