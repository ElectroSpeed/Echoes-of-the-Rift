#include "PortalSword.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

APortalSword::APortalSword()
{
    PrimaryActorTick.bCanEverTick = false;
    FirstPortal = nullptr;
    SecondPortal = nullptr;
}

void APortalSword::BeginPlay()
{
    Super::BeginPlay();
}

void APortalSword::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void APortalSword::PlacePortal(int ZoneNumber)
{
    if (!PortalClass) return;
    
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
    if (!PlayerController) return;

    APawn* PlayerPawn = PlayerController->GetPawn();
    if (!PlayerPawn) return;

    FVector SpawnLocation = PlayerPawn->GetActorLocation() + PlayerPawn->GetActorForwardVector() * 200.0f;
    FRotator SpawnRotation = PlayerPawn->GetActorRotation() + FRotator(0, 180, 0);
    
    FVector SecondPortalLocation = SpawnLocation + FVector(1000.0f * ZoneNumber, 0, 0);
    
    if (!FirstPortal)
    {
        FirstPortal = GetWorld()->SpawnActor<AActor>(PortalClass, SpawnLocation, SpawnRotation);
        if (!FirstPortal) return;
    }
    else
    {
        FirstPortal->SetActorLocation(SpawnLocation);
        FirstPortal->SetActorRotation(SpawnRotation);
    }

    if (!SecondPortal)
    {
        SecondPortal = GetWorld()->SpawnActor<AActor>(PortalClass, SecondPortalLocation, SpawnRotation);
        if (!SecondPortal) return;
    }
    else
    {
        SecondPortal->SetActorLocation(SecondPortalLocation);
        SecondPortal->SetActorRotation(SpawnRotation);
    }
}
