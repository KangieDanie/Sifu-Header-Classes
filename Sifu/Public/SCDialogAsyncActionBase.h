#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "DialogAsyncOutputPinDelegate.h"
#include "SCDialogAsyncActionBase.generated.h"

class USCDialogAsyncActionBase;
class ACharacter;

UCLASS()
class SIFU_API USCDialogAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDialogAsyncOutputPin OnDialogCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FDialogAsyncOutputPin OnDialogCut;
    
    UPROPERTY(BlueprintAssignable)
    FDialogAsyncOutputPin OnLineEnded;
    
    UPROPERTY(BlueprintAssignable)
    FDialogAsyncOutputPin OnInteractiveChoiceSelected;
    
    USCDialogAsyncActionBase();
    UFUNCTION(BlueprintCallable)
    static USCDialogAsyncActionBase* BPF_StartConversationExtended(ACharacter* _character, FName _startingSegment, const bool _bGenericSubtitles, ACharacter* _secondary, bool _bCutOtherDialogs, bool _bLookAtEnabled);
    
};

