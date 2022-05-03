#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOSUserInterface_CandidateEOSAccount.h"
#include "EOSUserInterface_SelectEOSAccount_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_SelectEOSAccount_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_SelectEOSAccount_Context();
    UFUNCTION(BlueprintCallable)
    void SelectCandidate(FEOSUserInterface_CandidateEOSAccount SelectedCandidate);
    
};

