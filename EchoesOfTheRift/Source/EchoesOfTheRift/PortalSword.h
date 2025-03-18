#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PortalSword.generated.h"

UCLASS()
class ECHOESOFTHERIFT_API APortalSword : public AActor
{
    GENERATED_BODY()
    
public:
    APortalSword();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Portals")
    void PlacePortal(int ZoneNumber);

    UPROPERTY(BlueprintReadWrite, Category = "Portals")
    AActor* FirstPortal;

    UPROPERTY(BlueprintReadWrite, Category = "Portals")
    AActor* SecondPortal;

private:
    UPROPERTY(EditAnywhere, Category = "Portals")
    TSubclassOf<AActor> PortalClass;
};
