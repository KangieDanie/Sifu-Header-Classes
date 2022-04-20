#include "RigVM.h"

class UScriptStruct;

void URigVM::SetParameterValueVector2D(const FName& InParameterName, const FVector2D& InValue, int32 InArrayIndex) {
}

void URigVM::SetParameterValueVector(const FName& InParameterName, const FVector& InValue, int32 InArrayIndex) {
}

void URigVM::SetParameterValueTransform(const FName& InParameterName, const FTransform& InValue, int32 InArrayIndex) {
}

void URigVM::SetParameterValueString(const FName& InParameterName, const FString& InValue, int32 InArrayIndex) {
}

void URigVM::SetParameterValueQuat(const FName& InParameterName, const FQuat& InValue, int32 InArrayIndex) {
}

void URigVM::SetParameterValueName(const FName& InParameterName, const FName& InValue, int32 InArrayIndex) {
}

void URigVM::SetParameterValueInt(const FName& InParameterName, int32 InValue, int32 InArrayIndex) {
}

void URigVM::SetParameterValueFloat(const FName& InParameterName, float InValue, int32 InArrayIndex) {
}

void URigVM::SetParameterValueBool(const FName& InParameterName, bool InValue, int32 InArrayIndex) {
}

FString URigVM::GetRigVMFunctionName(int32 InFunctionIndex) const {
    return TEXT("");
}

FVector2D URigVM::GetParameterValueVector2D(const FName& InParameterName, int32 InArrayIndex) {
    return FVector2D{};
}

FVector URigVM::GetParameterValueVector(const FName& InParameterName, int32 InArrayIndex) {
    return FVector{};
}

FTransform URigVM::GetParameterValueTransform(const FName& InParameterName, int32 InArrayIndex) {
    return FTransform{};
}

FString URigVM::GetParameterValueString(const FName& InParameterName, int32 InArrayIndex) {
    return TEXT("");
}

FQuat URigVM::GetParameterValueQuat(const FName& InParameterName, int32 InArrayIndex) {
    return FQuat{};
}

FName URigVM::GetParameterValueName(const FName& InParameterName, int32 InArrayIndex) {
    return NAME_None;
}

int32 URigVM::GetParameterValueInt(const FName& InParameterName, int32 InArrayIndex) {
    return 0;
}

float URigVM::GetParameterValueFloat(const FName& InParameterName, int32 InArrayIndex) {
    return 0.0f;
}

bool URigVM::GetParameterValueBool(const FName& InParameterName, int32 InArrayIndex) {
    return false;
}

int32 URigVM::GetParameterArraySize(const FName& InParameterName) const {
    return 0;
}

bool URigVM::Execute(const FName& InEntryName) {
    return false;
}

int32 URigVM::AddRigVMFunction(UScriptStruct* InRigVMStruct, const FName& InMethodName) {
    return 0;
}

URigVM::URigVM() {
    this->DeferredVMToCopy = NULL;
}

