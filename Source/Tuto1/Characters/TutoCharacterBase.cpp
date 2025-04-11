// By Marhime


#include "TutoCharacterBase.h"


// Sets default values
ATutoCharacterBase::ATutoCharacterBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATutoCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATutoCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATutoCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

