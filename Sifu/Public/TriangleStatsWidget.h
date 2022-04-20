#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "TriangleStatsWidget.generated.h"

UCLASS()
class UTriangleStatsWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush m_Brush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownLeftStat;
    
    UPROPERTY()
    UWidget::FGetFloat DownLeftStatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpStat;
    
    UPROPERTY()
    UWidget::FGetFloat UpStatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DownRightStat;
    
    UPROPERTY()
    UWidget::FGetFloat DownRightStatDelegate;
    
    UPROPERTY(EditAnywhere)
    FColor m_color;
    
    UPROPERTY(EditAnywhere)
    FColor m_TriangleColor;
    
    UPROPERTY(EditAnywhere)
    FColor m_CrossColor;
    
    UPROPERTY(EditAnywhere)
    float m_fTriangleLineWidth;
    
    UPROPERTY(EditAnywhere)
    float m_fCrossLineWidth;
    
    UTriangleStatsWidget();
    UFUNCTION(BlueprintCallable)
    void BPF_SetUpValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDownRightValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDownLeftValue(float _fValue);
    
};

