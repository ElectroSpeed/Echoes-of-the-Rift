#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlateformManager.generated.h"

UCLASS()
class ECHOESOFTHERIFT_API APlateformManager : public AActor
{
	GENERATED_BODY()
    
public:    
	APlateformManager();

protected:
	virtual void BeginPlay() override;

public:    
	virtual void Tick(float DeltaTime) override;
	
	void TogglePlatforms();

private:
	bool IsActivated; // True = Horizontal Platforms bougent, False = Vertical Platforms bougent
	
	UPROPERTY(EditAnywhere, Category = "Platforms")
	TArray<AActor*> PlatformActivators;

	UPROPERTY(EditAnywhere, Category = "Platforms")
	TArray<AActor*> HorizontalPlatforms;

	UPROPERTY(EditAnywhere, Category = "Platforms")
	TArray<AActor*> VerticalPlatforms;
};
