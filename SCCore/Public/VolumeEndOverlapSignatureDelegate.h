#pragma once
#include "CoreMinimal.h"
#include "VolumeEndOverlapSignatureDelegate.generated.h"

class UPrimitiveComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FourParams(FVolumeEndOverlapSignature, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex);

