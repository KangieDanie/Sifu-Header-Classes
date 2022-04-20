#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DialogActionBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class SCDIALOGMANAGERPLUGIN_API UDialogActionBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_OnNodeStart;
    
    UDialogActionBase();
};

