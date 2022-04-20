#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayCueObjectLibrary.h"
#include "GameplayCuePendingExecute.h"
#include "PreallocationInfo.h"
#include "GameplayCueManager.generated.h"

class AGameplayCueNotify_Actor;

UCLASS()
class GAMEPLAYABILITIES_API UGameplayCueManager : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary;
    
    UPROPERTY(Transient)
    FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary;
    
    UPROPERTY(Transient)
    TArray<UClass*> LoadedGameplayCueNotifyClasses;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<AGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation;
    
    UPROPERTY(Transient)
    TArray<FGameplayCuePendingExecute> PendingExecuteCues;
    
    UPROPERTY(Transient)
    int32 GameplayCueSendContextCount;
    
    UPROPERTY(Transient)
    TArray<FPreallocationInfo> PreallocationInfoList_Internal;
    
public:
    UGameplayCueManager();
};

