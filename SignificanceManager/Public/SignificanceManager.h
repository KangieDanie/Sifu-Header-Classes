#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SignificanceManager.generated.h"

UCLASS(DefaultConfig)
class SIGNIFICANCEMANAGER_API USignificanceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath SignificanceManagerClassName;
    
public:
    USignificanceManager();
};

