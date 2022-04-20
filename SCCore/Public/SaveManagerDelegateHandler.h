#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SaveManagerDelegateHandler.generated.h"

UCLASS()
class SCCORE_API USaveManagerDelegateHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSaveChangeStatus m_OnSaveStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFileLoaded m_OnSaveLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FFileLoaded m_OnProfileLoaded;
    
    USaveManagerDelegateHandler();
};

