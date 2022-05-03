#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCCoreTools -FallbackName=SCCoreTools
#include "EQuadrantTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlatform -FallbackName=EPlatform
#include "SCTools.generated.h"

class UWorld;
class UGameInstance;
class UObject;

UCLASS(BlueprintType)
class SIFU_API USCTools : public USCCoreTools {
    GENERATED_BODY()
public:
    USCTools();
    UFUNCTION(BlueprintPure)
    static EQuadrantTypes GetAttackQuadrant(EQuadrantTypes _eQuadrant, bool _bIsMirror);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ModifyObject(UObject* _object);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsDesktopPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_HasEntitlement(const UObject* _worldContextObject, const FName& _entitlement);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetMapPath(TSoftObjectPtr<UWorld> _map);
    
    UFUNCTION(BlueprintPure)
    static UGameInstance* BPF_GetGameInstanceNoWarning(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UObject* BPF_GetDefaultObject(UClass* _ObjectClass);
    
    UFUNCTION(BlueprintPure)
    static EPlatform BPF_GetCurrentSubsystemPlatform(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FadeWithoutWait(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Fade(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack, FLatentActionInfo LatentInfo);
    
};

