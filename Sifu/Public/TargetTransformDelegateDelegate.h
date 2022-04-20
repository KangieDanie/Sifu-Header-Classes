#pragma once
#include "CoreMinimal.h"
#include "BPOrderServiceInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TargetTransformDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FTargetTransformDelegate, const FBPOrderServiceInstance&, _instance, bool&, _bOutSuccess, FTransform&, _result);

