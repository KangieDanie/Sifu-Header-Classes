#include "QuartzSubsystem.h"

class UQuartzClockHandle;
class UObject;

float UQuartzSubsystem::GetRoundTripMinLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetRoundTripMaxLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetRoundTripAverageLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(const UObject* WorldContextObject, FName ClockName) {
    return NULL;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(const UObject* WorldContextObject) {
    return 0.0f;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency() {
    return 0.0f;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency() {
    return 0.0f;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency() {
    return 0.0f;
}

bool UQuartzSubsystem::DoesClockExist(const UObject* WorldContextObject, FName ClockName) {
    return false;
}

UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(const UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists) {
    return NULL;
}

UQuartzSubsystem::UQuartzSubsystem() {
}

