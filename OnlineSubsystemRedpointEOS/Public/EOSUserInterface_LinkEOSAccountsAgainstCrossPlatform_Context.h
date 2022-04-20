#pragma once
#include "CoreMinimal.h"
#include "EOSUserInterface_CandidateEOSAccount.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.generated.h"

UCLASS(BlueprintType)
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject {
    GENERATED_BODY()
public:
    UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context();
    UFUNCTION(BlueprintCallable)
    void SelectedCandidates(TArray<FEOSUserInterface_CandidateEOSAccount> NewSelectedCandidates);
    
};

