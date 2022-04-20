#include "QuartzClockHandle.h"

class UObject;

void UQuartzClockHandle::UnsubscribeFromTimeDivision(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary) {
}

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(const UObject* WorldContextObject) {
}

void UQuartzClockHandle::SubscribeToQuantizationEvent(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const FOnQuartzMetronomeEventBP& OnQuantizationEvent) {
}

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(const UObject* WorldContextObject, const FOnQuartzMetronomeEventBP& OnQuantizationEvent) {
}

void UQuartzClockHandle::SetTicksPerSecond(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float TicksPerSecond) {
}

void UQuartzClockHandle::SetThirtySecondNotesPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float ThirtySecondsNotesPerMinute) {
}

void UQuartzClockHandle::SetSecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float SecondsPerTick) {
}

void UQuartzClockHandle::SetMillisecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float MillisecondsPerTick) {
}

void UQuartzClockHandle::SetBeatsPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float BeatsPerMinute) {
}

void UQuartzClockHandle::ResumeClock(const UObject* WorldContextObject) {
}

void UQuartzClockHandle::ResetTransport(const UObject* WorldContextObject, const FOnQuartzCommandEventBP& InDelegate) {
}

void UQuartzClockHandle::PauseClock(const UObject* WorldContextObject) {
}

float UQuartzClockHandle::GetTicksPerSecond(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UQuartzClockHandle::GetSecondsPerTick(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UQuartzClockHandle::GetMillisecondsPerTick(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UQuartzClockHandle::GetBeatsPerMinute(const UObject* WorldContextObject) const {
    return 0.0f;
}

UQuartzClockHandle::UQuartzClockHandle() {
}

