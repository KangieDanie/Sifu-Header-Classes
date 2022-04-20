#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IgnoreCollisionStatics.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class IGNORECOLLISIONMODULE_API UIgnoreCollisionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIgnoreCollisionStatics();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCollisionIgnored(UPrimitiveComponent* _ComponentA, FName _boneNameA, UPrimitiveComponent* _ComponentB, FName _boneNameB, bool _bIgnoreCollision);
    
};

