#pragma once
#include "CoreMinimal.h"
#include "EMoviePlaybackType.generated.h"

UENUM()
enum EMoviePlaybackType {
    MT_Normal,
    MT_Looped,
    MT_LoadingLoop,
    MT_MAX UMETA(Hidden),
};

