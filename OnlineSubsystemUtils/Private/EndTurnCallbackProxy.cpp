#include "EndTurnCallbackProxy.h"

class UObject;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class APlayerController;
class UEndTurnCallbackProxy;

UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
    return NULL;
}

UEndTurnCallbackProxy::UEndTurnCallbackProxy() {
}

