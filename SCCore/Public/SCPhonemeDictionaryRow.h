#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPhonemeDictionary.h"
#include "SCPhonemeDictionaryRow.generated.h"

USTRUCT()
struct SCCORE_API FSCPhonemeDictionaryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<EPhonemeDictionary> m_Phonemes;
    
    FSCPhonemeDictionaryRow();
};

