#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "IntStatTextBlock.generated.h"

class UColorComparisonProfile;

UCLASS()
class UIntStatTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Stat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StatIncrement;
    
    UPROPERTY()
    UWidget::FGetInt32 StatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CompareStat;
    
    UPROPERTY()
    UWidget::FGetInt32 CompareStatDelegate;
    
    UPROPERTY(EditAnywhere)
    UColorComparisonProfile* m_ColorComparisonProfile;
    
    UPROPERTY(EditAnywhere)
    bool m_bHightIsBetter;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeNegative;
    
    UIntStatTextBlock();
};

