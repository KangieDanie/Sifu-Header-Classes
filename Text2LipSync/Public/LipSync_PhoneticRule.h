#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=EPhoneme -FallbackName=EPhoneme
#include "LipSync_PhoneticRule.generated.h"

USTRUCT()
struct FLipSync_PhoneticRule {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCondition_IsFirst;
    
    UPROPERTY()
    bool bCondition_IsLast;
    
    UPROPERTY()
    FString Condition_NextSymbol;
    
    UPROPERTY()
    TArray<EPhoneme> Result_Replace;
    
    UPROPERTY()
    bool bResult_RemoveNext;
    
    TEXT2LIPSYNC_API FLipSync_PhoneticRule();
};

