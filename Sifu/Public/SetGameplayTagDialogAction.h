#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SetGameplayTagDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API USetGameplayTagDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bAdd;
    
    UPROPERTY(EditAnywhere)
    FName m_Owner;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_GameplayTag;
    
public:
    USetGameplayTagDialogAction();
};

