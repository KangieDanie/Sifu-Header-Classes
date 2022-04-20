#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "SCDialogData.h"
#include "SCDialogLineTableRow.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCDialogLineTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSCDialogData> DialogsVariations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LinePriority;
    
    FSCDialogLineTableRow();
};

