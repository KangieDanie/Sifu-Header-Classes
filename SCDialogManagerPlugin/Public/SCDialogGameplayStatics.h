#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SCDialogGameplayStatics.generated.h"

class ACharacter;

UCLASS(BlueprintType)
class SCDIALOGMANAGERPLUGIN_API USCDialogGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCDialogGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static void BPF_PlayDialogLine(ACharacter* _character, FName _line, const bool _bGenericSubtitles);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsPlayingDialogLine(ACharacter* _character);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsInvolvedInConversation(const ACharacter* _character);
    
};

