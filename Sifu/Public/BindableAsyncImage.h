#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AsyncTextureStruct.h"
#include "GetAsyncTextureAssetDelegate.h"
#include "BindableAsyncImage.generated.h"

class UAsyncImage;

UCLASS(EditInlineNew)
class UBindableAsyncImage : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UAsyncImage* m_AsyncImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAsyncTextureStruct AsyncTexture;
    
    UPROPERTY()
    FGetAsyncTextureAsset AsyncTextureDelegate;
    
public:
    UBindableAsyncImage();
};

