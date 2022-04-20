#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Lootboxes_BlackRoom.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;

UCLASS()
class SIFU_API ALootboxes_BlackRoom : public AActor {
    GENERATED_BODY()
public:
    ALootboxes_BlackRoom();
    UFUNCTION(BlueprintCallable)
    void LoadTextureAsyncForMaterial(TSoftObjectPtr<UTexture2D> _texture, UMaterialInstanceDynamic* _material, FName _paramName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableTextureStreamingLoc();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableTextureStreamingLoc();
    
};

