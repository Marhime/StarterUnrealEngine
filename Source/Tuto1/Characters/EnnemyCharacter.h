// By Marhime

#pragma once

#include "CoreMinimal.h"
#include "TutoCharacterBase.h"
#include "EnnemyCharacter.generated.h"

UCLASS()
class TUTO1_API AEnnemyCharacter : public ATutoCharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
