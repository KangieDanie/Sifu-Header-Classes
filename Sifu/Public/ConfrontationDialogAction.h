#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "ConfrontationDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UConfrontationDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActorSentToConfrontation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iCircleIndex;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayPrefightAnimations;
    
    UConfrontationDialogAction();
protected:
    UFUNCTION()
    TArray<FName> GetActorOptions() const;
    
};

