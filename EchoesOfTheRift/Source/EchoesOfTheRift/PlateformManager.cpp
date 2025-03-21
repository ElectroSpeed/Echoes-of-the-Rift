#include "PlateformManager.h"
#include "GameFramework/Actor.h"

APlateformManager::APlateformManager()
{
	PrimaryActorTick.bCanEverTick = true;
	IsActivated = false;
}

void APlateformManager::BeginPlay()
{
	Super::BeginPlay();
}

void APlateformManager::TogglePlatforms()
{
	IsActivated = !IsActivated;

	for (AActor* Platform : HorizontalPlatforms)
	{
		Platform->SetActorTickEnabled(IsActivated);
	}

	for (AActor* Platform : VerticalPlatforms)
	{
		Platform->SetActorTickEnabled(!IsActivated);
	}
}

void APlateformManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector Movement = FVector(100 * DeltaTime, 0, 0);

	if (!IsActivated)
	{
		Movement = FVector(0, 0, 100 * DeltaTime);
	}

	for (AActor* Platform : (IsActivated ? HorizontalPlatforms : VerticalPlatforms))
	{
		Platform->AddActorWorldOffset(Movement);
	}
}
