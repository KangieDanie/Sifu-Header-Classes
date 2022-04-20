#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FilterProperties.h"
#include "AnimSequenceDBEntry.h"
#include "AvailabilityLayerCache.h"
#include "AvailabilityLayerCaches.h"
#include "AnimSequenceDBCache.h"
#include "ReplayHelperLibrary.generated.h"

class ABaseReplayController;
class ASCPlayerController;
class ABaseWeapon;

UCLASS(BlueprintType)
class SIFU_API UReplayHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReplayHelperLibrary();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetScreenMessagesEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SaveFilterPreset(int32 _iSlot, const FFilterProperties& _inProperties, ABaseReplayController* _controller);
    
    UFUNCTION(BlueprintCallable)
    static FFilterProperties BPF_LoadFilterPreset(int32 _iSlot, bool& _bIsValid);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsAvailabilityLayerPushed(const FAvailabilityLayerCache& _inALCache);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_HasEntitlement(const ASCPlayerController* _controller, const FName& _entitlement);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAnimSequences(UPARAM(Ref) TArray<FAnimSequenceDBEntry>& _outSequencesDB, const FAnimSequenceDBCache& _sequencesCache, const ABaseWeapon* _weapon);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_FilterPresetComparison(const FFilterProperties& _first, const FFilterProperties& _second);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_AreScreenMessagesEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_AreAvailabilityLayersPushed(const FAvailabilityLayerCaches& _inALCaches);
    
};

