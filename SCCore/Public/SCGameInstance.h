#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "SCGameInstance.generated.h"

class UObject;

UCLASS(NonTransient)
class SCCORE_API USCGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    bool m_bEnableDevMode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UObject*> m_ObjectToLoadAtBegining;
    
public:
    USCGameInstance();
private:
    UFUNCTION(Exec)
    void TriggerPGOWriteFile();
    
};

