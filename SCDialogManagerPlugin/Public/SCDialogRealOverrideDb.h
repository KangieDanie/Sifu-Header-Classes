#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DialogActionArrayContainer.h"
#include "SCDialogRealOverrideDb.generated.h"

UCLASS()
class SCDIALOGMANAGERPLUGIN_API USCDialogRealOverrideDb : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDialogActionArrayContainer> m_FirstLinesActions;
    
    UPROPERTY(EditAnywhere)
    FDialogActionArrayContainer m_LastLineActions;
    
    USCDialogRealOverrideDb();
};

