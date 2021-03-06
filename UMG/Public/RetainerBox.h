#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
#include "RetainerBox.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS()
class UMG_API URetainerBox : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bRetainRender;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RenderOnInvalidation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RenderOnPhase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Phase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PhaseCount;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* EffectMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TextureParameter;
    
public:
    URetainerBox();
    UFUNCTION(BlueprintCallable)
    void SetTextureParameter(FName NewTextureParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetRetainRendering(bool bInRetainRendering);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectMaterial(UMaterialInterface* NewEffectMaterial);
    
    UFUNCTION(BlueprintCallable)
    void RequestRender();
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetEffectMaterial() const;
    
};

