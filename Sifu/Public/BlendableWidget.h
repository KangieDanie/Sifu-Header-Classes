#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCType -FallbackName=ESCType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BlendableWidget.generated.h"

class UMaterialParameterCollection;

UCLASS(EditInlineNew)
class SIFU_API UBlendableWidget : public USCUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_fBlendDuration;
    
    UPROPERTY(EditAnywhere)
    ESCType m_eBlendValueType;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_ColorStart;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_ColorEnd;
    
public:
    UBlendableWidget();
    UFUNCTION(BlueprintCallable)
    void BPF_StartTimerBlend(bool _bReverse);
    
protected:
    UFUNCTION(BlueprintPure)
    float BPF_GetBlendedFloat() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor BPF_GetBlendedColor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 BPF_BindMaterialParameterToBlendAlpha(UMaterialParameterCollection* _collection, FName _parameterName);
    
};

