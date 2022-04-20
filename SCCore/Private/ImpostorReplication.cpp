#include "ImpostorReplication.h"
#include "Net/UnrealNetwork.h"

void UImpostorReplication::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UImpostorReplication, m_Impostors);
}

UImpostorReplication::UImpostorReplication() {
}

