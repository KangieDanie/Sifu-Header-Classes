#pragma once
#include "CoreMinimal.h"
#include "SCDialogCondition.h"
#include "EOperationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCConversationRule.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCConversationRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIntendedResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckGameplayTag;
    
    UPROPERTY()
    FName Context;
    
    UPROPERTY()
    FName Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCDialogCondition DialogCondition;
    
    UPROPERTY()
    EOperationType Operation;
    
    UPROPERTY()
    FString Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GameplayTagOwner;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag RequiredGameplayTag;
    
    FSCConversationRule();
};

