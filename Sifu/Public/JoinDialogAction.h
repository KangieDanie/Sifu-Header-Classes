#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "JoinDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UJoinDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActorSentToDialog;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayPrefightAnimations;
    
    UJoinDialogAction();
protected:
    UFUNCTION()
    TArray<FName> GetActorOptions() const;
    
};

