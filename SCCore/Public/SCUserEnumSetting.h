#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SCUserEnumSetting.generated.h"

class USCUserDefinedEnumBinding;

USTRUCT()
struct FSCUserEnumSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath m_Enum;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<USCUserDefinedEnumBinding> m_Bindings;
    
    SCCORE_API FSCUserEnumSetting();
};

